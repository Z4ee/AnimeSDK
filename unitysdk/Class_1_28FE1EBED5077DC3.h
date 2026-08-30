#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_28FE1EBED5077DC3_METHOD_1_4AD97EC8CCF80258_OFFSET UNITYSDK_OFFSET(0x16337CC0)
#define CLASS_1_28FE1EBED5077DC3_METHOD_1_4EA582D3E2DFE443_OFFSET UNITYSDK_OFFSET(0x163379A0)
#define CLASS_1_28FE1EBED5077DC3_METHOD_1_578BCAA8FD7DAD5C_OFFSET UNITYSDK_OFFSET(0x16337C70)
#define CLASS_1_28FE1EBED5077DC3_METHOD_1_9323869B0EDAC3E5_OFFSET UNITYSDK_OFFSET(0x16337EF0)
#define CLASS_1_28FE1EBED5077DC3__CTOR_OFFSET UNITYSDK_OFFSET(0x16337760)

inline static constexpr unsigned int Class_1_28FE1EBED5077DC3_TypeDefinitionIndex = 79407;

class Class_1_28FE1EBED5077DC3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::System::UInt32>*>* LHCJLCMMLKK; // 0x10
	::Il2CppArray<::System::UInt32>* CLDMPGEBPKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28FE1EBED5077DC3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* Method_1_4EA582D3E2DFE443()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28FE1EBED5077DC3_METHOD_1_4EA582D3E2DFE443_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* Method_1_578BCAA8FD7DAD5C()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28FE1EBED5077DC3_METHOD_1_578BCAA8FD7DAD5C_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*>* Method_1_4AD97EC8CCF80258()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28FE1EBED5077DC3_METHOD_1_4AD97EC8CCF80258_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* Method_1_9323869B0EDAC3E5(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_28FE1EBED5077DC3_METHOD_1_9323869B0EDAC3E5_OFFSET))(this, a1);
	}
};
