#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MDB_MDBCOLLIDER_COPYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1033F820)
#define MDB_MDBCOLLIDER_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1033F890)
#define MDB_MDBCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1033F900)

namespace Mdb
{
	inline static constexpr unsigned int MdbCollider_TypeDefinitionIndex = 85925;

	class MdbCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 norm; // 0x18
		::System::Boolean isGlobal; // 0x24
		::System::String* boneName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDB_MDBCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void CopyParameters(::Mdb::MdbCollider* Obj)
		{
			return ((::System::Void(*)(::PVOID, ::Mdb::MdbCollider*))((::PBYTE)hIl2Cpp + MDB_MDBCOLLIDER_COPYPARAMETERS_OFFSET))(this, Obj);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDB_MDBCOLLIDER_GETTYPENAME_OFFSET))(this);
		}
	};
}
