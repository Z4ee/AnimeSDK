#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceARow; }
namespace RPG::GameCore { class PerformanceCRow; }
namespace RPG::GameCore { class PerformanceDRow; }
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { class PerformanceVideoRow; }
namespace RPG::GameCore { template <typename T> class PerformanceMaskStack_1; }
namespace System { class String; }

#define CLASS_1_06EF49E17999C143_GET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x11C0C390)
#define CLASS_1_06EF49E17999C143_GET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x11C0C3B0)
#define CLASS_1_06EF49E17999C143_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x11C0C4A0)
#define CLASS_1_06EF49E17999C143_METHOD_1_18C3B129F2E38CCF_OFFSET UNITYSDK_OFFSET(0x11C0C890)
#define CLASS_1_06EF49E17999C143_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x11C0C2A0)
#define CLASS_1_06EF49E17999C143_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11C0C250)
#define CLASS_1_06EF49E17999C143_METHOD_1_2418FEFB981244F8_OFFSET UNITYSDK_OFFSET(0x11C0D340)
#define CLASS_1_06EF49E17999C143_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x11C0C820)
#define CLASS_1_06EF49E17999C143_METHOD_1_73B8E5A7C1BFCA1F_OFFSET UNITYSDK_OFFSET(0x11C0C200)
#define CLASS_1_06EF49E17999C143_METHOD_1_8CC4F51B52E2959B_OFFSET UNITYSDK_OFFSET(0x11C0CB10)
#define CLASS_1_06EF49E17999C143_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x11C0C660)
#define CLASS_1_06EF49E17999C143_METHOD_1_9D88A62CD6A4BE52_1_OFFSET UNITYSDK_OFFSET(0x11C0C340)
#define CLASS_1_06EF49E17999C143_METHOD_1_9D88A62CD6A4BE52_OFFSET UNITYSDK_OFFSET(0x11C0C2F0)
#define CLASS_1_06EF49E17999C143_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x11C0C3D0)
#define CLASS_1_06EF49E17999C143_METHOD_1_D710476BC9D06F61_OFFSET UNITYSDK_OFFSET(0x11C0D8E0)
#define CLASS_1_06EF49E17999C143_METHOD_1_D872496C150B19B6_1_OFFSET UNITYSDK_OFFSET(0x11C0C1B0)
#define CLASS_1_06EF49E17999C143_METHOD_1_D872496C150B19B6_OFFSET UNITYSDK_OFFSET(0x11C0C160)
#define CLASS_1_06EF49E17999C143_METHOD_1_DC429EC719556AD7_OFFSET UNITYSDK_OFFSET(0x11C0D610)
#define CLASS_1_06EF49E17999C143_METHOD_1_DDDEE766A0E3D16C_OFFSET UNITYSDK_OFFSET(0x11C0C740)
#define CLASS_1_06EF49E17999C143_METHOD_1_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0x11C0C7B0)
#define CLASS_1_06EF49E17999C143_METHOD_1_EF333E1B2132FC41_OFFSET UNITYSDK_OFFSET(0x11C0CDC0)
#define CLASS_1_06EF49E17999C143_METHOD_1_FE626CEDCE963542_OFFSET UNITYSDK_OFFSET(0x11C0D080)
#define CLASS_1_06EF49E17999C143_SET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x11C0C3A0)
#define CLASS_1_06EF49E17999C143_SET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x11C0C3C0)
#define CLASS_1_06EF49E17999C143__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C0DC70)
#define CLASS_1_06EF49E17999C143__CTOR_OFFSET UNITYSDK_OFFSET(0x11C0DBA0)

inline static constexpr unsigned int Class_1_06EF49E17999C143_TypeDefinitionIndex = 49341;

class Class_1_06EF49E17999C143 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_16()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EF49E17999C143_TypeDefinitionIndex)->GetStaticField(0xC770);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EF49E17999C143_TypeDefinitionIndex)->GetStaticField(0xC774);
	}
	// static const ::System::UInt32 Field_1_0 = 0x0; // 0x0
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* Field_1_12; // 0x10
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* Field_1_13; // 0x18
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* Field_1_8; // 0x20
	::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* Field_1_10; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* Field_1_11; // 0x38
	::System::String* Field_1_15; // 0x40
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* Field_1_7; // 0x48
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::ScreenTransferType>* Field_1_9; // 0x50
	::RPG::GameCore::ELevelPerformanceType Field_1_2; // 0x58
	::System::UInt32 _EndMaskTalkSentenceID_k__BackingField; // 0x5C
	::System::Single _EndBlackCloseDelayTime_k__BackingField; // 0x60
	::System::Boolean Field_1_6; // 0x64
	::RPG::GameCore::PerformanceChangePlayerType Field_1_14; // 0x68
	::System::UInt32 Field_1_3; // 0x6C
	::RPG::GameCore::PerformanceSkipType Field_1_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143__CCTOR_OFFSET))();
	}

	::RPG::GameCore::StoryBlackType Method_1_D872496C150B19B6()
	{
		return ((::RPG::GameCore::StoryBlackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_D872496C150B19B6_OFFSET))(this);
	}

	::RPG::GameCore::StoryBlackType Method_1_D872496C150B19B6_1()
	{
		return ((::RPG::GameCore::StoryBlackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_D872496C150B19B6_1_OFFSET))(this);
	}

	::RPG::GameCore::ScreenTransferType Method_1_73B8E5A7C1BFCA1F()
	{
		return ((::RPG::GameCore::ScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_73B8E5A7C1BFCA1F_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::RPG::GameCore::CustomScreenTransferType Method_1_9D88A62CD6A4BE52()
	{
		return ((::RPG::GameCore::CustomScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_9D88A62CD6A4BE52_OFFSET))(this);
	}

	::RPG::GameCore::CustomScreenTransferType Method_1_9D88A62CD6A4BE52_1()
	{
		return ((::RPG::GameCore::CustomScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_9D88A62CD6A4BE52_1_OFFSET))(this);
	}

	::System::Single get_EndBlackCloseDelayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_GET_ENDBLACKCLOSEDELAYTIME_OFFSET))(this);
	}

	::System::Void set_EndBlackCloseDelayTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_SET_ENDBLACKCLOSEDELAYTIME_OFFSET))(this, value);
	}

	::System::UInt32 get_EndMaskTalkSentenceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_GET_ENDMASKTALKSENTENCEID_OFFSET))(this);
	}

	::System::Void set_EndMaskTalkSentenceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_SET_ENDMASKTALKSENTENCEID_OFFSET))(this, value);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Boolean Method_1_E4EC0FD7A76783C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_E4EC0FD7A76783C9_OFFSET))(this);
	}

	::System::Boolean Method_1_DDDEE766A0E3D16C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_DDDEE766A0E3D16C_OFFSET))(this);
	}

	::System::Void Method_1_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	static ::Class_1_06EF49E17999C143* Method_1_18C3B129F2E38CCF(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::String* a3)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_18C3B129F2E38CCF_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_06EF49E17999C143* Method_1_8CC4F51B52E2959B(::RPG::GameCore::ELevelPerformanceType a1, ::System::String* a2)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_8CC4F51B52E2959B_OFFSET))(a1, a2);
	}

	static ::Class_1_06EF49E17999C143* Method_1_EF333E1B2132FC41(::RPG::GameCore::PerformanceARow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceARow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_EF333E1B2132FC41_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_FE626CEDCE963542(::RPG::GameCore::PerformanceCRow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceCRow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_FE626CEDCE963542_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_2418FEFB981244F8(::RPG::GameCore::PerformanceDRow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceDRow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_2418FEFB981244F8_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_DC429EC719556AD7(::RPG::GameCore::PerformanceERow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_DC429EC719556AD7_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_D710476BC9D06F61(::RPG::GameCore::PerformanceVideoRow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_D710476BC9D06F61_OFFSET))(a1);
	}
};
