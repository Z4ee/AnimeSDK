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

#define CLASS_1_9209A25C753C9BBE_METHOD_1_435F9714D685BAB3_OFFSET UNITYSDK_OFFSET(0x1247FB40)
#define CLASS_1_9209A25C753C9BBE_METHOD_1_5CE867B5039955AD_OFFSET UNITYSDK_OFFSET(0x1247F200)
#define CLASS_1_9209A25C753C9BBE_METHOD_1_B839A5400D87FE87_OFFSET UNITYSDK_OFFSET(0x1247F740)
#define CLASS_1_9209A25C753C9BBE_METHOD_1_D5AF90DF13319E57_OFFSET UNITYSDK_OFFSET(0x1247FAA0)
#define CLASS_1_9209A25C753C9BBE_METHOD_1_EE301FC9442A6629_OFFSET UNITYSDK_OFFSET(0x1247F0D0)

inline static constexpr unsigned int Class_1_9209A25C753C9BBE_TypeDefinitionIndex = 68818;

class Class_1_9209A25C753C9BBE : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_EE301FC9442A6629(::RPG::Client::NavMap::ICartographer* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + CLASS_1_9209A25C753C9BBE_METHOD_1_EE301FC9442A6629_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_B839A5400D87FE87(::RPG::Client::NavMap::ISubNavMap* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + CLASS_1_9209A25C753C9BBE_METHOD_1_B839A5400D87FE87_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_5CE867B5039955AD(::RPG::Client::NavMap::SubTabData* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + CLASS_1_9209A25C753C9BBE_METHOD_1_5CE867B5039955AD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* Method_1_D5AF90DF13319E57(::RPG::Client::NavMap::ICartography* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + CLASS_1_9209A25C753C9BBE_METHOD_1_D5AF90DF13319E57_OFFSET))(a1);
	}

	static ::System::Void Method_1_435F9714D685BAB3(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>*))((::PBYTE)hIl2Cpp + CLASS_1_9209A25C753C9BBE_METHOD_1_435F9714D685BAB3_OFFSET))(a1, a2);
	}
};
