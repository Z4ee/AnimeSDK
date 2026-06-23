#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/Struct_2_FA6F1CFCFAC0D4A9.h"

class Class_1_4DEA6EA9ED911F25;
class Class_1_E85C6B6436A9E3DA;
class Class_3_01B4CC30216C9ABE_2;
class Class_4_06287BFE0A30E0A3_2;
class Class_4_4BA0DF1EA13B94EC;
class Class_4_C3281F1010689A02;
class Class_4_D798666918818A97;
class Class_4_EF9B54D195DF7339;
class Class_4_EF9B54D195DF7339_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define CLASS_3_C4256FE86E78127E_METHOD_3_2260FF64C0972122_OFFSET UNITYSDK_OFFSET(0x1CCEB250)
#define CLASS_3_C4256FE86E78127E_METHOD_3_24DE93ACA5879EE9_OFFSET UNITYSDK_OFFSET(0x1CCEAB30)
#define CLASS_3_C4256FE86E78127E_METHOD_3_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1CCEADE0)
#define CLASS_3_C4256FE86E78127E_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1CCEB120)
#define CLASS_3_C4256FE86E78127E_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CCEAF40)
#define CLASS_3_C4256FE86E78127E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CCEB090)
#define CLASS_3_C4256FE86E78127E_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1CCEB1C0)
#define CLASS_3_C4256FE86E78127E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEB010)

inline static constexpr unsigned int Class_3_C4256FE86E78127E_TypeDefinitionIndex = 87815;

class Class_3_C4256FE86E78127E : public ::Class_2_CEC393DDA7BD65D6
{
public:
	::System::Collections::ObjectModel::ReadOnlyDictionary_2<::MoleMole::Arcade::BallsRace::BrEntityType, ::System::Collections::Generic::List_1<::Class_3_01B4CC30216C9ABE_2*>*>* Field_3_1; // 0x28
	::Class_4_4BA0DF1EA13B94EC* Field_3_0; // 0x30
	::Class_1_4DEA6EA9ED911F25* Field_3_4; // 0x38
	::System::Single Field_3_3; // 0x40
	::System::Single Field_3_6; // 0x44
	::System::Single Field_3_2; // 0x48
	::Struct_2_FA6F1CFCFAC0D4A9 Field_3_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_24DE93ACA5879EE9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_24DE93ACA5879EE9_OFFSET))(this, a1);
	}

	::System::Void Method_3_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_2260FF64C0972122(::Class_4_C3281F1010689A02* a1, ::Class_4_EF9B54D195DF7339* a2, ::Class_4_06287BFE0A30E0A3_2* a3, ::Class_4_D798666918818A97* a4, ::Class_4_EF9B54D195DF7339_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*, ::Class_4_EF9B54D195DF7339*, ::Class_4_06287BFE0A30E0A3_2*, ::Class_4_D798666918818A97*, ::Class_4_EF9B54D195DF7339_1*))((::PBYTE)hIl2Cpp + CLASS_3_C4256FE86E78127E_METHOD_3_2260FF64C0972122_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
