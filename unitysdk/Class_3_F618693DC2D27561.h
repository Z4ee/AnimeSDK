#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define CLASS_3_F618693DC2D27561_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x181F0F50)
#define CLASS_3_F618693DC2D27561_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x181F0ED0)
#define CLASS_3_F618693DC2D27561__CTOR_OFFSET UNITYSDK_OFFSET(0x181F0F20)

inline static constexpr unsigned int Class_3_F618693DC2D27561_TypeDefinitionIndex = 23149;

class Class_3_F618693DC2D27561 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::JsonEnum* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F618693DC2D27561__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F618693DC2D27561*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F618693DC2D27561*&))((::PBYTE)hIl2Cpp + CLASS_3_F618693DC2D27561_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F618693DC2D27561* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F618693DC2D27561*))((::PBYTE)hIl2Cpp + CLASS_3_F618693DC2D27561_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
