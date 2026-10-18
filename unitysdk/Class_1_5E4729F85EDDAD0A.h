#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E4729F85EDDAD0A_METHOD_1_32713CB52E6C8B95_OFFSET UNITYSDK_OFFSET(0x15759770)
#define CLASS_1_5E4729F85EDDAD0A_METHOD_1_384E04FC5D8E1DFF_OFFSET UNITYSDK_OFFSET(0x15759C50)
#define CLASS_1_5E4729F85EDDAD0A_METHOD_1_6F52EDD4F5B46553_OFFSET UNITYSDK_OFFSET(0x15758E30)
#define CLASS_1_5E4729F85EDDAD0A_METHOD_1_CD18295ACEF339F4_OFFSET UNITYSDK_OFFSET(0x15758FC0)
#define CLASS_1_5E4729F85EDDAD0A_METHOD_1_D5AF90DF13319E57_OFFSET UNITYSDK_OFFSET(0x15759BB0)

inline static constexpr unsigned int Class_1_5E4729F85EDDAD0A_TypeDefinitionIndex = 74579;

class Class_1_5E4729F85EDDAD0A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_6F52EDD4F5B46553(::RPG::Client::NavMap::ICartographer* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + CLASS_1_5E4729F85EDDAD0A_METHOD_1_6F52EDD4F5B46553_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_32713CB52E6C8B95(::RPG::Client::NavMap::ISubNavMap* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + CLASS_1_5E4729F85EDDAD0A_METHOD_1_32713CB52E6C8B95_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_CD18295ACEF339F4(::RPG::Client::NavMap::SubTabData* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + CLASS_1_5E4729F85EDDAD0A_METHOD_1_CD18295ACEF339F4_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_D5AF90DF13319E57(::RPG::Client::NavMap::ICartography* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + CLASS_1_5E4729F85EDDAD0A_METHOD_1_D5AF90DF13319E57_OFFSET))(a1);
	}

	static ::System::Void Method_1_384E04FC5D8E1DFF(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a1, ::RPG::Client::NavMap::ICartography* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + CLASS_1_5E4729F85EDDAD0A_METHOD_1_384E04FC5D8E1DFF_OFFSET))(a1, a2);
	}
};
