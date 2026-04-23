#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_37D655FAABC4D43A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1254CA70)
#define CLASS_2_37D655FAABC4D43A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1254CAB0)
#define CLASS_2_37D655FAABC4D43A___C__SETUPVIEW_B__5_1_OFFSET UNITYSDK_OFFSET(0x1254CAC0)

inline static constexpr unsigned int Class_2_37D655FAABC4D43A___c_TypeDefinitionIndex = 65745;

class Class_2_37D655FAABC4D43A___c : public ::System::Object
{
public:
	static ::Class_2_37D655FAABC4D43A___c** StaticGet___9()
	{
		return (::Class_2_37D655FAABC4D43A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37D655FAABC4D43A___c_TypeDefinitionIndex)->GetStaticField(0x105A0);
	}
	static ::System::Func_2<::RPG::GameCore::FixPoint, ::System::Object*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::GameCore::FixPoint, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37D655FAABC4D43A___c_TypeDefinitionIndex)->GetStaticField(0x105A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A___C__CTOR_OFFSET))(this);
	}

	::System::Object* _SetupView_b__5_1(::RPG::GameCore::FixPoint x)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A___C__SETUPVIEW_B__5_1_OFFSET))(this, x);
	}
};
