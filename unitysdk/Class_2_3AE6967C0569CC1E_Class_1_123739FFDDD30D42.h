#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_3AE6967C0569CC1E;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3AE6967C0569CC1E_CLASS_1_123739FFDDD30D42_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0xF7C3FA0)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_123739FFDDD30D42_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xF7C3FB0)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_123739FFDDD30D42__CTOR_OFFSET UNITYSDK_OFFSET(0xF7C3F90)

inline static constexpr unsigned int Class_2_3AE6967C0569CC1E_Class_1_123739FFDDD30D42_TypeDefinitionIndex = 66947;

class Class_2_3AE6967C0569CC1E_Class_1_123739FFDDD30D42 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x18
	::MoleMole::UserLocalDataItem* Field_1_0; // 0x20
	::Class_2_3AE6967C0569CC1E* Field_1_5; // 0x28
	::System::Boolean Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_123739FFDDD30D42__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_123739FFDDD30D42_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_123739FFDDD30D42_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}
};
