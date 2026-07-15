#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightShopBuyEvent; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FA8339464381844_METHOD_1_180F24D8B44F5842_OFFSET UNITYSDK_OFFSET(0x17C5E340)
#define CLASS_1_5FA8339464381844_METHOD_1_6F8804967587ECFD_OFFSET UNITYSDK_OFFSET(0x17C5E9B0)
#define CLASS_1_5FA8339464381844_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17C5E8E0)
#define CLASS_1_5FA8339464381844_METHOD_1_F15BB39D73E654DD_OFFSET UNITYSDK_OFFSET(0x17C5DFC0)
#define CLASS_1_5FA8339464381844__CTOR_OFFSET UNITYSDK_OFFSET(0x17C5ED80)

inline static constexpr unsigned int Class_1_5FA8339464381844_TypeDefinitionIndex = 62252;

class Class_1_5FA8339464381844 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F15BB39D73E654DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844_METHOD_1_F15BB39D73E654DD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>* Method_1_180F24D8B44F5842()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844_METHOD_1_180F24D8B44F5842_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Int32 Method_1_6F8804967587ECFD(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844_METHOD_1_6F8804967587ECFD_OFFSET))(this, a1);
	}
};
