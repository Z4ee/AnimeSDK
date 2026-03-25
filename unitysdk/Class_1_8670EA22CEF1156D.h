#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_D2E90365D99FC7E6_13;
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8670EA22CEF1156D_METHOD_1_090650873C35FC4A_OFFSET UNITYSDK_OFFSET(0x117CEAD0)
#define CLASS_1_8670EA22CEF1156D_METHOD_1_49F4068DC28049D4_OFFSET UNITYSDK_OFFSET(0x117CF030)
#define CLASS_1_8670EA22CEF1156D_METHOD_1_749CD0D065D919BF_OFFSET UNITYSDK_OFFSET(0x117CF140)
#define CLASS_1_8670EA22CEF1156D_METHOD_1_CEAFC24C8FD08A58_OFFSET UNITYSDK_OFFSET(0x117CED50)
#define CLASS_1_8670EA22CEF1156D__CTOR_OFFSET UNITYSDK_OFFSET(0x117CF1D0)

inline static constexpr unsigned int Class_1_8670EA22CEF1156D_TypeDefinitionIndex = 49946;

class Class_1_8670EA22CEF1156D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::ActivityLocalLegendRewardData* Method_1_090650873C35FC4A()
	{
		return ((::RPG::Client::ActivityLocalLegendRewardData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D_METHOD_1_090650873C35FC4A_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityLocalLegendRewardType, ::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_13*>*>* Method_1_CEAFC24C8FD08A58()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityLocalLegendRewardType, ::System::Collections::Generic::List_1<::Class_1_D2E90365D99FC7E6_13*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8670EA22CEF1156D_METHOD_1_CEAFC24C8FD08A58_OFFSET))();
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
