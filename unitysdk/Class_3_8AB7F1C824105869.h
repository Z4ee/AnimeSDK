#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_8AB7F1C824105869_METHOD_3_5433D6C708F8C421_OFFSET UNITYSDK_OFFSET(0x1B620A30)
#define CLASS_3_8AB7F1C824105869_METHOD_3_CC5389287A803194_OFFSET UNITYSDK_OFFSET(0x1B620A70)
#define CLASS_3_8AB7F1C824105869__CTOR_OFFSET UNITYSDK_OFFSET(0x1B620A60)

inline static constexpr unsigned int Class_3_8AB7F1C824105869_TypeDefinitionIndex = 20493;

class Class_3_8AB7F1C824105869 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::RPG::GameCore::DynamicString* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AB7F1C824105869__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5433D6C708F8C421(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8AB7F1C824105869*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8AB7F1C824105869*&))((::PBYTE)hIl2Cpp + CLASS_3_8AB7F1C824105869_METHOD_3_5433D6C708F8C421_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CC5389287A803194(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8AB7F1C824105869* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8AB7F1C824105869*))((::PBYTE)hIl2Cpp + CLASS_3_8AB7F1C824105869_METHOD_3_CC5389287A803194_OFFSET))(a1, a2);
	}
};
