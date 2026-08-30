#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ISubNavMap; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01A74472BC1A24E3_METHOD_1_52826D5C66257C67_OFFSET UNITYSDK_OFFSET(0x17889280)
#define CLASS_1_01A74472BC1A24E3_METHOD_1_7017D9AC8254AAE7_OFFSET UNITYSDK_OFFSET(0x17889B80)
#define CLASS_1_01A74472BC1A24E3_METHOD_1_CA37A1D5FBDADEE1_OFFSET UNITYSDK_OFFSET(0x178896F0)

inline static constexpr unsigned int Class_1_01A74472BC1A24E3_TypeDefinitionIndex = 74503;

class Class_1_01A74472BC1A24E3 : public ::System::Object
{
public:
	static ::RPG::Client::NavMap::ISubNavMap* Method_1_52826D5C66257C67(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::NavMap::ISubNavMap*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01A74472BC1A24E3_METHOD_1_52826D5C66257C67_OFFSET))(a1, a2);
	}

	static ::RPG::Client::NavMap::ISubNavMap* Method_1_CA37A1D5FBDADEE1(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::NavMap::ISubNavMap*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01A74472BC1A24E3_METHOD_1_CA37A1D5FBDADEE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7017D9AC8254AAE7(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*))((::PBYTE)hIl2Cpp + CLASS_1_01A74472BC1A24E3_METHOD_1_7017D9AC8254AAE7_OFFSET))(a1, a2);
	}
};
