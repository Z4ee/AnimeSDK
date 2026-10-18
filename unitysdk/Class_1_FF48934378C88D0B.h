#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_FE2DD0F5C3863475;
namespace System { class String; }

#define CLASS_1_FF48934378C88D0B_METHOD_1_674D580DCE26571A_OFFSET UNITYSDK_OFFSET(0xB20C4A0)
#define CLASS_1_FF48934378C88D0B_METHOD_1_797A8C7C91E13767_OFFSET UNITYSDK_OFFSET(0xB20C520)
#define CLASS_1_FF48934378C88D0B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB20C450)
#define CLASS_1_FF48934378C88D0B_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB20C5D0)
#define CLASS_1_FF48934378C88D0B__CTOR_OFFSET UNITYSDK_OFFSET(0xB20C5C0)

inline static constexpr unsigned int Class_1_FF48934378C88D0B_TypeDefinitionIndex = 80140;

class Class_1_FF48934378C88D0B : public ::System::Object
{
public:
	::Class_1_FE2DD0F5C3863475* IBPBJBOKKMF; // 0x10
	::System::Nullable_1<::UnityEngine::Vector2Int> MIFKHBDOGLN; // 0x18

	::System::Void _ctor(::Class_1_FE2DD0F5C3863475* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE2DD0F5C3863475*))((::PBYTE)hIl2Cpp + CLASS_1_FF48934378C88D0B__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF48934378C88D0B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::UnityEngine::Vector2Int Method_1_674D580DCE26571A()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF48934378C88D0B_METHOD_1_674D580DCE26571A_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftRotationType Method_1_797A8C7C91E13767()
	{
		return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF48934378C88D0B_METHOD_1_797A8C7C91E13767_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF48934378C88D0B_TOSTRING_OFFSET))(this);
	}
};
