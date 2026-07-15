#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_78D787F77D9AA3DD_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1CF4F1F0)
#define CLASS_3_78D787F77D9AA3DD_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CF4F1C0)
#define CLASS_3_78D787F77D9AA3DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FC6A0)

inline static constexpr unsigned int Class_3_78D787F77D9AA3DD_TypeDefinitionIndex = 21910;

class Class_3_78D787F77D9AA3DD : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::RPG::GameCore::DynamicValueContextScope Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78D787F77D9AA3DD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_78D787F77D9AA3DD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_78D787F77D9AA3DD*&))((::PBYTE)hIl2Cpp + CLASS_3_78D787F77D9AA3DD_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_78D787F77D9AA3DD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_78D787F77D9AA3DD*))((::PBYTE)hIl2Cpp + CLASS_3_78D787F77D9AA3DD_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
