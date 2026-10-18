#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EReplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_94D75DCA7529CCF2_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xCF07D70)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xCF07DD0)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCF07FC0)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET UNITYSDK_OFFSET(0xCF07710)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_9D1D78F50D8E3CB3_OFFSET UNITYSDK_OFFSET(0xCF076E0)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_ABF0C0C4D3034928_OFFSET UNITYSDK_OFFSET(0xCF07F00)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_C58C7E9AF58987E4_OFFSET UNITYSDK_OFFSET(0xCF07740)
#define CLASS_1_94D75DCA7529CCF2_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xCF08000)
#define CLASS_1_94D75DCA7529CCF2__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF08060)

inline static constexpr unsigned int Class_1_94D75DCA7529CCF2_TypeDefinitionIndex = 56197;

class Class_1_94D75DCA7529CCF2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_ICPKEOFMIAO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94D75DCA7529CCF2_TypeDefinitionIndex)->GetStaticField(0x40430);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_NNDOBIMOFEO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94D75DCA7529CCF2_TypeDefinitionIndex)->GetStaticField(0x40438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_1_9D1D78F50D8E3CB3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_9D1D78F50D8E3CB3_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_1_9D1D78F50D8E3CB3_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_9D1D78F50D8E3CB3_1_OFFSET))();
	}

	static ::System::Void Method_1_C58C7E9AF58987E4(::RPG::GameCore::EReplayTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::EReplayTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_C58C7E9AF58987E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_06330CD58CB602B6_OFFSET))();
	}

	static ::System::Void Method_1_ABF0C0C4D3034928(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_ABF0C0C4D3034928_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_D799715F2EF979EA_OFFSET))();
	}

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D75DCA7529CCF2_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}
};
