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

#define CLASS_1_06EF49E17999C143_GET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x18A35F10)
#define CLASS_1_06EF49E17999C143_GET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x18A35F30)
#define CLASS_1_06EF49E17999C143_METHOD_1_09D518CD19A52420_OFFSET UNITYSDK_OFFSET(0x18A36B50)
#define CLASS_1_06EF49E17999C143_METHOD_1_0BBAD75CD82FF4C6_OFFSET UNITYSDK_OFFSET(0x18A371E0)
#define CLASS_1_06EF49E17999C143_METHOD_1_18C3B129F2E38CCF_OFFSET UNITYSDK_OFFSET(0x18A36480)
#define CLASS_1_06EF49E17999C143_METHOD_1_18DD7E1EED9D36D1_OFFSET UNITYSDK_OFFSET(0x18A36D80)
#define CLASS_1_06EF49E17999C143_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x18A35E20)
#define CLASS_1_06EF49E17999C143_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18A35DD0)
#define CLASS_1_06EF49E17999C143_METHOD_1_2F57AE360A4E2412_OFFSET UNITYSDK_OFFSET(0x18A36FB0)
#define CLASS_1_06EF49E17999C143_METHOD_1_51D2CCEAD62FAF96_OFFSET UNITYSDK_OFFSET(0x18A36700)
#define CLASS_1_06EF49E17999C143_METHOD_1_73B8E5A7C1BFCA1F_OFFSET UNITYSDK_OFFSET(0x18A35D80)
#define CLASS_1_06EF49E17999C143_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x18A36410)
#define CLASS_1_06EF49E17999C143_METHOD_1_970D5059FCBAD470_OFFSET UNITYSDK_OFFSET(0x18A363A0)
#define CLASS_1_06EF49E17999C143_METHOD_1_9B0C43B0B6D3BA9B_1_OFFSET UNITYSDK_OFFSET(0x18A36250)
#define CLASS_1_06EF49E17999C143_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x18A36020)
#define CLASS_1_06EF49E17999C143_METHOD_1_9D88A62CD6A4BE52_1_OFFSET UNITYSDK_OFFSET(0x18A35EC0)
#define CLASS_1_06EF49E17999C143_METHOD_1_9D88A62CD6A4BE52_OFFSET UNITYSDK_OFFSET(0x18A35E70)
#define CLASS_1_06EF49E17999C143_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x18A35F50)
#define CLASS_1_06EF49E17999C143_METHOD_1_D08BCB51F5D3AC26_OFFSET UNITYSDK_OFFSET(0x18A36920)
#define CLASS_1_06EF49E17999C143_METHOD_1_D872496C150B19B6_1_OFFSET UNITYSDK_OFFSET(0x18A35D30)
#define CLASS_1_06EF49E17999C143_METHOD_1_D872496C150B19B6_OFFSET UNITYSDK_OFFSET(0x18A35CE0)
#define CLASS_1_06EF49E17999C143_METHOD_1_FABFA21254FBB3C1_OFFSET UNITYSDK_OFFSET(0x18A36330)
#define CLASS_1_06EF49E17999C143_SET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x18A35F20)
#define CLASS_1_06EF49E17999C143_SET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x18A35F40)
#define CLASS_1_06EF49E17999C143__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A374E0)
#define CLASS_1_06EF49E17999C143__CTOR_OFFSET UNITYSDK_OFFSET(0x18A37410)

inline static constexpr unsigned int Class_1_06EF49E17999C143_TypeDefinitionIndex = 53774;

class Class_1_06EF49E17999C143 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_IFJGFIBCIGO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EF49E17999C143_TypeDefinitionIndex)->GetStaticField(0xC720);
	}
	static ::System::Single* StaticGet_KLDAKHELOLK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EF49E17999C143_TypeDefinitionIndex)->GetStaticField(0xC724);
	}
	// static const ::System::UInt32 IIGGAHBNNCD = 0x0; // 0x0
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::ScreenTransferType>* FIJKLDEPEEJ; // 0x10
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* HAKFLEJNHCG; // 0x18
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* OKABMMEBPHE; // 0x20
	::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* MMNCMNKAHIN; // 0x28
	::System::String* OGIICLPEECP; // 0x30
	::System::String* HMBOFKOIBFG; // 0x38
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* HDLGKCHPMPP; // 0x40
	::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* HILHFKIDEMJ; // 0x48
	::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* NBPMENAIAPC; // 0x50
	::System::UInt32 _EndMaskTalkSentenceID_k__BackingField; // 0x58
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x5C
	::System::Single _EndBlackCloseDelayTime_k__BackingField; // 0x60
	::RPG::GameCore::PerformanceChangePlayerType JGEMAMGFABJ; // 0x64
	::System::UInt32 HNPDLANHONH; // 0x68
	::System::Boolean BALBCKJGOKC; // 0x6C
	::RPG::GameCore::PerformanceSkipType HLEKAACPFHP; // 0x70

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

	::System::Void set_EndBlackCloseDelayTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_SET_ENDBLACKCLOSEDELAYTIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_EndMaskTalkSentenceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_GET_ENDMASKTALKSENTENCEID_OFFSET))(this);
	}

	::System::Void set_EndMaskTalkSentenceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_SET_ENDMASKTALKSENTENCEID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_9B0C43B0B6D3BA9B_1_OFFSET))(this);
	}

	::System::Boolean Method_1_970D5059FCBAD470()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_970D5059FCBAD470_OFFSET))(this);
	}

	::System::Boolean Method_1_FABFA21254FBB3C1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_FABFA21254FBB3C1_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::Class_1_06EF49E17999C143* Method_1_18C3B129F2E38CCF(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::String* a3)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_18C3B129F2E38CCF_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_06EF49E17999C143* Method_1_51D2CCEAD62FAF96(::RPG::GameCore::ELevelPerformanceType a1, ::System::String* a2)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_51D2CCEAD62FAF96_OFFSET))(a1, a2);
	}

	static ::Class_1_06EF49E17999C143* Method_1_D08BCB51F5D3AC26(::RPG::GameCore::PerformanceARow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceARow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_D08BCB51F5D3AC26_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_09D518CD19A52420(::RPG::GameCore::PerformanceCRow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceCRow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_09D518CD19A52420_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_18DD7E1EED9D36D1(::RPG::GameCore::PerformanceDRow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceDRow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_18DD7E1EED9D36D1_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_2F57AE360A4E2412(::RPG::GameCore::PerformanceERow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_2F57AE360A4E2412_OFFSET))(a1);
	}

	static ::Class_1_06EF49E17999C143* Method_1_0BBAD75CD82FF4C6(::RPG::GameCore::PerformanceVideoRow* a1)
	{
		return ((::Class_1_06EF49E17999C143*(*)(::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + CLASS_1_06EF49E17999C143_METHOD_1_0BBAD75CD82FF4C6_OFFSET))(a1);
	}
};
