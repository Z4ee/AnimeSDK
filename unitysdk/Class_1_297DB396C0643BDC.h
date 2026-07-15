#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITeleportableIcon; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_297DB396C0643BDC_METHOD_1_34A975920F947E9F_OFFSET UNITYSDK_OFFSET(0x16EB9220)
#define CLASS_1_297DB396C0643BDC_METHOD_1_6F52EDD4F5B46553_OFFSET UNITYSDK_OFFSET(0x170521B0)
#define CLASS_1_297DB396C0643BDC_METHOD_1_82586F5228EF4517_OFFSET UNITYSDK_OFFSET(0x17052340)
#define CLASS_1_297DB396C0643BDC_METHOD_1_B839A5400D87FE87_OFFSET UNITYSDK_OFFSET(0x17052AE0)
#define CLASS_1_297DB396C0643BDC_METHOD_1_D5AF90DF13319E57_OFFSET UNITYSDK_OFFSET(0x16EB9180)

inline static constexpr unsigned int Class_1_297DB396C0643BDC_TypeDefinitionIndex = 71153;

class Class_1_297DB396C0643BDC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_6F52EDD4F5B46553(::RPG::Client::NavMap::ICartographer* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + CLASS_1_297DB396C0643BDC_METHOD_1_6F52EDD4F5B46553_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_B839A5400D87FE87(::RPG::Client::NavMap::ISubNavMap* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + CLASS_1_297DB396C0643BDC_METHOD_1_B839A5400D87FE87_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_82586F5228EF4517(::RPG::Client::NavMap::SubTabData* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + CLASS_1_297DB396C0643BDC_METHOD_1_82586F5228EF4517_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_D5AF90DF13319E57(::RPG::Client::NavMap::ICartography* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + CLASS_1_297DB396C0643BDC_METHOD_1_D5AF90DF13319E57_OFFSET))(a1);
	}

	static ::System::Void Method_1_34A975920F947E9F(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>*))((::PBYTE)hIl2Cpp + CLASS_1_297DB396C0643BDC_METHOD_1_34A975920F947E9F_OFFSET))(a1, a2);
	}
};
