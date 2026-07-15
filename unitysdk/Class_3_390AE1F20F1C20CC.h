#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_390AE1F20F1C20CC_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1B27AE60)
#define CLASS_3_390AE1F20F1C20CC_METHOD_3_C4B16F32CD808E01_OFFSET UNITYSDK_OFFSET(0x1B27AED0)
#define CLASS_3_390AE1F20F1C20CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27AEB0)

inline static constexpr unsigned int Class_3_390AE1F20F1C20CC_TypeDefinitionIndex = 21574;

class Class_3_390AE1F20F1C20CC : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::RPG::MVector3 Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x2C
	::System::Boolean Field_3_3; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_390AE1F20F1C20CC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_390AE1F20F1C20CC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_390AE1F20F1C20CC*&))((::PBYTE)hIl2Cpp + CLASS_3_390AE1F20F1C20CC_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C4B16F32CD808E01(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_390AE1F20F1C20CC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_390AE1F20F1C20CC*))((::PBYTE)hIl2Cpp + CLASS_3_390AE1F20F1C20CC_METHOD_3_C4B16F32CD808E01_OFFSET))(a1, a2);
	}
};
