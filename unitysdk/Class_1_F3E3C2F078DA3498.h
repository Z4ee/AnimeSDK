#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class JigsawItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3E3C2F078DA3498_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB84FE80)
#define CLASS_1_F3E3C2F078DA3498_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0xB84FB80)
#define CLASS_1_F3E3C2F078DA3498_METHOD_1_7A05FFCEE6773DD8_OFFSET UNITYSDK_OFFSET(0xB850470)
#define CLASS_1_F3E3C2F078DA3498_METHOD_1_9591D15A05121C7C_OFFSET UNITYSDK_OFFSET(0xB850270)
#define CLASS_1_F3E3C2F078DA3498_METHOD_1_CD6492B432F8AED2_OFFSET UNITYSDK_OFFSET(0xB850030)
#define CLASS_1_F3E3C2F078DA3498_METHOD_1_F44858702FD5CDA7_OFFSET UNITYSDK_OFFSET(0xB84FEE0)
#define CLASS_1_F3E3C2F078DA3498__CTOR_OFFSET UNITYSDK_OFFSET(0xB84FA70)

inline static constexpr unsigned int Class_1_F3E3C2F078DA3498_TypeDefinitionIndex = 78177;

class Class_1_F3E3C2F078DA3498 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*>* CCHAAKOLCFL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*>* ILLOMKAHNNH; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>* KGBKLAPGFMN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498_METHOD_1_36A43EE474699637_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F44858702FD5CDA7(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::JigsawItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498_METHOD_1_F44858702FD5CDA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD6492B432F8AED2(::System::UInt32 a1, ::RPG::Client::Prop::JigsawItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498_METHOD_1_CD6492B432F8AED2_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>* Method_1_9591D15A05121C7C(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498_METHOD_1_9591D15A05121C7C_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>* Method_1_7A05FFCEE6773DD8(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::Client::Prop::JigsawItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3E3C2F078DA3498_METHOD_1_7A05FFCEE6773DD8_OFFSET))(this, a1);
	}
};
