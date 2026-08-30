#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_AC819B79CD1B6B62;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1CA7AB80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1CA7AED0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0x1CA7AF30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CHECKAUTOREFRESHMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CA7AC00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7B0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_RefreshSummarizer_TypeDefinitionIndex = 65287;

	class GridFightRoleShop_RefreshSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Boolean _IsGemi; // 0x10
		::Enum_3_75A1C8C41006A504 _SrcType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShop(::Class_1_AC819B79CD1B6B62* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AC819B79CD1B6B62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAutoRefreshModifier(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CHECKAUTOREFRESHMODIFIER_OFFSET))(this, a1);
		}
	};
}
