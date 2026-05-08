#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_OFFSETGROUP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B46AE0)
#define MOLEMOLE_CONFIG_OFFSETGROUP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B46FD0)
#define MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B46B40)
#define MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16B47050)
#define MOLEMOLE_CONFIG_OFFSETGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B469C0)
#define MOLEMOLE_CONFIG_OFFSETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B46AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OffsetGroup_TypeDefinitionIndex = 79901;

	class OffsetGroup : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::Config::OffsetGroup*>** StaticGet_DEFAULT_GROUPS()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(OffsetGroup_TypeDefinitionIndex)->GetStaticField(0x41270);
		}
		static ::MoleMole::Config::OffsetGroup** StaticGet_ZERO()
		{
			return (::MoleMole::Config::OffsetGroup**)Il2CppClass::FromTypeDefinitionIndex(OffsetGroup_TypeDefinitionIndex)->GetStaticField(0x41278);
		}
		::UnityEngine::Vector3 AngleOffset; // 0x10
		::UnityEngine::Vector3 RandomPositionRange; // 0x1C
		::UnityEngine::Vector3 BackupAngleOffset; // 0x28
		::UnityEngine::Vector3 RandomAngleRange; // 0x34
		::UnityEngine::Vector3 PositionOffset; // 0x40
		::System::Boolean IsUseRotationXZ; // 0x4C
		::System::Boolean IsClampOffsetDistance; // 0x4D
		::System::Boolean IsUseRotationY; // 0x4E
		::UnityEngine::Vector3 BackupPositionOffset; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
