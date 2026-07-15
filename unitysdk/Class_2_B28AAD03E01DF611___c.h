#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B28AAD03E01DF611___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16464E10)
#define CLASS_2_B28AAD03E01DF611___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16464E50)
#define CLASS_2_B28AAD03E01DF611___C__SETUPVIEW_B__5_1_OFFSET UNITYSDK_OFFSET(0x16464E60)

inline static constexpr unsigned int Class_2_B28AAD03E01DF611___c_TypeDefinitionIndex = 68116;

class Class_2_B28AAD03E01DF611___c : public ::System::Object
{
public:
	static ::Class_2_B28AAD03E01DF611___c** StaticGet___9()
	{
		return (::Class_2_B28AAD03E01DF611___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B28AAD03E01DF611___c_TypeDefinitionIndex)->GetStaticField(0x2B9E0);
	}
	static ::System::Func_2<::RPG::GameCore::FixPoint, ::System::Object*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::GameCore::FixPoint, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B28AAD03E01DF611___c_TypeDefinitionIndex)->GetStaticField(0x2B9E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611___C__CTOR_OFFSET))(this);
	}

	::System::Object* _SetupView_b__5_1(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611___C__SETUPVIEW_B__5_1_OFFSET))(this, a1);
	}
};
