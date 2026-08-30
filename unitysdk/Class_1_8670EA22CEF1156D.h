#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_D2E90365D99FC7E6_17;
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8670EA22CEF1156D_METHOD_1_3AF9724CCFA2419C_OFFSET UNITYSDK_OFFSET(0x195310F0)
#define CLASS_1_8670EA22CEF1156D_METHOD_1_49F4068DC28049D4_OFFSET UNITYSDK_OFFSET(0x19531740)
#define CLASS_1_8670EA22CEF1156D_METHOD_1_749CD0D065D919BF_OFFSET UNITYSDK_OFFSET(0x19531850)
#define CLASS_1_8670EA22CEF1156D_METHOD_1_F876D2C6EAA82B81_OFFSET UNITYSDK_OFFSET(0x195313B0)
#define CLASS_1_8670EA22CEF1156D__CTOR_OFFSET UNITYSDK_OFFSET(0x195318E0)

inline static constexpr unsigned int Class_1_8670EA22CEF1156D_TypeDefinitionIndex = 61662;

class Class_1_8670EA22CEF1156D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ActivityLocalLegendRewardData* Method_1_3AF9724CCFA2419C()
	{
		return ((::RPG::Client::ActivityLocalLegendRewardData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D_METHOD_1_3AF9724CCFA2419C_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityLocalLegendRewardType, ::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_17*>*>* Method_1_F876D2C6EAA82B81()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityLocalLegendRewardType, ::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_17*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D_METHOD_1_F876D2C6EAA82B81_OFFSET))();
	}

	static ::RPG::Client::TextID Method_1_49F4068DC28049D4(::RPG::GameCore::ActivityLocalLegendRewardType a1)
	{
		return ((::RPG::Client::TextID(*)(::RPG::GameCore::ActivityLocalLegendRewardType))((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D_METHOD_1_49F4068DC28049D4_OFFSET))(a1);
	}

	static ::System::String* Method_1_749CD0D065D919BF(::RPG::GameCore::ActivityLocalLegendRewardType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::ActivityLocalLegendRewardType))((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D_METHOD_1_749CD0D065D919BF_OFFSET))(a1);
	}
};
