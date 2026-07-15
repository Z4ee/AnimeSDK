#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtSkillConfig; }
namespace System { class String; }

#define CLASS_1_D3DBF2400BA06586_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18C7AD30)
#define CLASS_1_D3DBF2400BA06586_METHOD_1_5F25AAE1F2FBDF75_OFFSET UNITYSDK_OFFSET(0x18C7ADD0)
#define CLASS_1_D3DBF2400BA06586_METHOD_1_821D4346A7E0B2C4_OFFSET UNITYSDK_OFFSET(0x18C7ADB0)
#define CLASS_1_D3DBF2400BA06586_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18C7AD40)
#define CLASS_1_D3DBF2400BA06586_METHOD_1_9F25BB8F0AC58CBF_OFFSET UNITYSDK_OFFSET(0x18C7AE30)
#define CLASS_1_D3DBF2400BA06586_METHOD_1_ACE6B9BC84CA2B23_OFFSET UNITYSDK_OFFSET(0x18C7ADC0)
#define CLASS_1_D3DBF2400BA06586_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x18C7ADA0)
#define CLASS_1_D3DBF2400BA06586__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7AF40)

inline static constexpr unsigned int Class_1_D3DBF2400BA06586_TypeDefinitionIndex = 51830;

class Class_1_D3DBF2400BA06586 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::RPG::GameCore::RtSkillConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtSkillConfig* Method_1_821D4346A7E0B2C4()
	{
		return ((::RPG::GameCore::RtSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_821D4346A7E0B2C4_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_ACE6B9BC84CA2B23()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_ACE6B9BC84CA2B23_OFFSET))(this);
	}

	::Class_1_D3DBF2400BA06586* Method_1_5F25AAE1F2FBDF75(::System::Object* a1, ::RPG::GameCore::RtSkillConfig* a2)
	{
		return ((::Class_1_D3DBF2400BA06586*(*)(::PVOID, ::System::Object*, ::RPG::GameCore::RtSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_5F25AAE1F2FBDF75_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_9F25BB8F0AC58CBF(::RPG::GameCore::RtSkillPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_D3DBF2400BA06586_METHOD_1_9F25BB8F0AC58CBF_OFFSET))(this, a1);
	}
};
