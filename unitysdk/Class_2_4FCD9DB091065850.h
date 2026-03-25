#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_56FF45D7B2C55655;
class Class_1_84810E6928F4E8D2;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4FCD9DB091065850_METHOD_2_46991DD8563806F0_OFFSET UNITYSDK_OFFSET(0x115B9710)
#define CLASS_2_4FCD9DB091065850_METHOD_2_52BF5F073B944704_OFFSET UNITYSDK_OFFSET(0x115B91E0)
#define CLASS_2_4FCD9DB091065850_METHOD_2_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0x115B9C70)
#define CLASS_2_4FCD9DB091065850_METHOD_2_9215A63B043494D1_OFFSET UNITYSDK_OFFSET(0x115B9890)
#define CLASS_2_4FCD9DB091065850_METHOD_2_9E21A50FD382EB63_OFFSET UNITYSDK_OFFSET(0x115B9AE0)
#define CLASS_2_4FCD9DB091065850_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x115B9F40)
#define CLASS_2_4FCD9DB091065850__CTOR_OFFSET UNITYSDK_OFFSET(0x115B9140)

inline static constexpr unsigned int Class_2_4FCD9DB091065850_TypeDefinitionIndex = 60639;

class Class_2_4FCD9DB091065850 : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_84810E6928F4E8D2*>* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_52BF5F073B944704(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_52BF5F073B944704_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_46991DD8563806F0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_46991DD8563806F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9215A63B043494D1(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_9215A63B043494D1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9E21A50FD382EB63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_9E21A50FD382EB63_OFFSET))(this, a1);
	}

	::System::Void Method_2_71170E420FCC0F61(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_71170E420FCC0F61_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}
};
