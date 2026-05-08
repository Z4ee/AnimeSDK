#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/CoreBase/ComponentMask.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0B34F397813FF038_METHOD_1_90C785B491347F80_OFFSET UNITYSDK_OFFSET(0x19D5AFB0)
#define CLASS_1_0B34F397813FF038__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D5AFA0)

inline static constexpr unsigned int Class_1_0B34F397813FF038_TypeDefinitionIndex = 26257;

class Class_1_0B34F397813FF038 : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B34F397813FF038__CCTOR_OFFSET))();
	}

	static ::MoleMole::Arcade::CoreBase::ComponentMask Method_1_90C785B491347F80(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0B34F397813FF038_METHOD_1_90C785B491347F80_OFFSET))(a1);
	}
};
