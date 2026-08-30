#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }

#define CLASS_1_49C9FFA56D320EFB_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB7A6600)
#define CLASS_1_49C9FFA56D320EFB_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0xB7A6650)
#define CLASS_1_49C9FFA56D320EFB_METHOD_1_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0xB7A6540)
#define CLASS_1_49C9FFA56D320EFB__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A6780)

inline static constexpr unsigned int Class_1_49C9FFA56D320EFB_TypeDefinitionIndex = 74323;

class Class_1_49C9FFA56D320EFB : public ::System::Object
{
public:
	::RPG::Client::ItemData* KPFKDKLCFKG; // 0x10
	::RPG::GameCore::RelicSetConfigRow* NFMNGLLACDK; // 0x18

	::System::Void _ctor(::RPG::GameCore::RelicSetConfigRow* a1, ::RPG::Client::ItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicSetConfigRow*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_CFDB2DF757369D2B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB_METHOD_1_CFDB2DF757369D2B_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	static ::Class_1_49C9FFA56D320EFB* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_49C9FFA56D320EFB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_49C9FFA56D320EFB_METHOD_1_C6843992E5B2B49B_OFFSET))(a1);
	}
};
