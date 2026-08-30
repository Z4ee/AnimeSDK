#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_76461D4B11526004_METHOD_1_0EBB767B6CED254F_OFFSET UNITYSDK_OFFSET(0x1823D290)
#define CLASS_1_76461D4B11526004_METHOD_1_7936D118536B1770_OFFSET UNITYSDK_OFFSET(0x1823D180)
#define CLASS_1_76461D4B11526004__CTOR_OFFSET UNITYSDK_OFFSET(0x1823D480)

inline static constexpr unsigned int Class_1_76461D4B11526004_TypeDefinitionIndex = 53891;

class Class_1_76461D4B11526004 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76461D4B11526004__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 Method_1_7936D118536B1770(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_76461D4B11526004_METHOD_1_7936D118536B1770_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_0EBB767B6CED254F(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CLASS_1_76461D4B11526004_METHOD_1_0EBB767B6CED254F_OFFSET))(a1);
	}
};
