#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class String; }

#define CLASS_1_C29D3E78F9B2323B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15987DA0)
#define CLASS_1_C29D3E78F9B2323B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15987DB0)
#define CLASS_1_C29D3E78F9B2323B_METHOD_1_6F0867198ED0892C_OFFSET UNITYSDK_OFFSET(0x15987E50)
#define CLASS_1_C29D3E78F9B2323B_METHOD_1_821D4346A7E0B2C4_OFFSET UNITYSDK_OFFSET(0x15987DE0)
#define CLASS_1_C29D3E78F9B2323B_METHOD_1_952D901C068DE65B_OFFSET UNITYSDK_OFFSET(0x15987E00)
#define CLASS_1_C29D3E78F9B2323B_METHOD_1_ACE6B9BC84CA2B23_OFFSET UNITYSDK_OFFSET(0x15987DF0)
#define CLASS_1_C29D3E78F9B2323B_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x15987DD0)
#define CLASS_1_C29D3E78F9B2323B__CTOR_OFFSET UNITYSDK_OFFSET(0x15987EA0)

inline static constexpr unsigned int Class_1_C29D3E78F9B2323B_TypeDefinitionIndex = 54284;

class Class_1_C29D3E78F9B2323B : public ::System::Object
{
public:
	::RPG::GameCore::RtSkillConfig* PPANINAEOFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtSkillConfig* Method_1_821D4346A7E0B2C4()
	{
		return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_821D4346A7E0B2C4_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_ACE6B9BC84CA2B23()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_ACE6B9BC84CA2B23_OFFSET))(this);
	}

	::Class_1_C29D3E78F9B2323B* Method_1_952D901C068DE65B(::RPG::GameCore::RtSkillConfig* a1)
	{
		return ((::Class_1_C29D3E78F9B2323B*(*)(::PVOID, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_952D901C068DE65B_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6F0867198ED0892C(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_C29D3E78F9B2323B_METHOD_1_6F0867198ED0892C_OFFSET))(this, a1);
	}
};
