#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CEC16FA18DF47E19;
class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4FCD9DB091065850_METHOD_2_52BF5F073B944704_OFFSET UNITYSDK_OFFSET(0x188AB980)
#define CLASS_2_4FCD9DB091065850_METHOD_2_783E22D784A211A3_OFFSET UNITYSDK_OFFSET(0x188ABED0)
#define CLASS_2_4FCD9DB091065850_METHOD_2_9215A63B043494D1_OFFSET UNITYSDK_OFFSET(0x188AC040)
#define CLASS_2_4FCD9DB091065850_METHOD_2_9E21A50FD382EB63_OFFSET UNITYSDK_OFFSET(0x188AC280)
#define CLASS_2_4FCD9DB091065850_METHOD_2_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x188AC400)
#define CLASS_2_4FCD9DB091065850_METHOD_2_E683565DADBDB76F_OFFSET UNITYSDK_OFFSET(0x188AC6D0)
#define CLASS_2_4FCD9DB091065850__CTOR_OFFSET UNITYSDK_OFFSET(0x188AB8E0)

inline static constexpr unsigned int Class_2_4FCD9DB091065850_TypeDefinitionIndex = 70571;

class Class_2_4FCD9DB091065850 : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CEC16FA18DF47E19*>* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_52BF5F073B944704(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_52BF5F073B944704_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_783E22D784A211A3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_783E22D784A211A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9215A63B043494D1(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_9215A63B043494D1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9E21A50FD382EB63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_9E21A50FD382EB63_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF653AC3FD8A315F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_BF653AC3FD8A315F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E683565DADBDB76F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FCD9DB091065850_METHOD_2_E683565DADBDB76F_OFFSET))(this);
	}
};
