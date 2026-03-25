#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"

class Class_1_51278AA2276AE188;
class Class_1_56FF45D7B2C55655;
class Class_1_DA7373FBD5F460E0;
class Class_1_ECBCF86CDE61CBCA;
class Class_2_B4A86C2C265B56CB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class MiddleDistantViewPrefabInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E621EB18962732C5_GET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0x8C55A50)
#define CLASS_2_E621EB18962732C5_METHOD_2_4A65E434964A4C42_OFFSET UNITYSDK_OFFSET(0x8C55090)
#define CLASS_2_E621EB18962732C5_METHOD_2_5A1B5FEB9A31120F_OFFSET UNITYSDK_OFFSET(0x8C55220)
#define CLASS_2_E621EB18962732C5_METHOD_2_C95B03C5A040E982_OFFSET UNITYSDK_OFFSET(0x8C558B0)
#define CLASS_2_E621EB18962732C5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8C551E0)
#define CLASS_2_E621EB18962732C5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8C551A0)
#define CLASS_2_E621EB18962732C5_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8C54F90)
#define CLASS_2_E621EB18962732C5_SET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0x8C55A60)
#define CLASS_2_E621EB18962732C5__CTOR_OFFSET UNITYSDK_OFFSET(0x8C54E20)

inline static constexpr unsigned int Class_2_E621EB18962732C5_TypeDefinitionIndex = 60534;

class Class_2_E621EB18962732C5 : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_51278AA2276AE188*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_B4A86C2C265B56CB*>* Field_2_2; // 0x20
	::System::Boolean _RefreshMDV_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_4A65E434964A4C42(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_ECBCF86CDE61CBCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_METHOD_2_4A65E434964A4C42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_5A1B5FEB9A31120F(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::MiddleDistantViewPrefabInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::MiddleDistantViewPrefabInfo*))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_METHOD_2_5A1B5FEB9A31120F_OFFSET))(this, a1, a2);
	}

	::Class_1_DA7373FBD5F460E0* Method_2_C95B03C5A040E982(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::HoyoTag* a2)
	{
		return ((::Class_1_DA7373FBD5F460E0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_METHOD_2_C95B03C5A040E982_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_RefreshMDV()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_GET_REFRESHMDV_OFFSET))(this);
	}

	::System::Void set_RefreshMDV(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E621EB18962732C5_SET_REFRESHMDV_OFFSET))(this, value);
	}
};
