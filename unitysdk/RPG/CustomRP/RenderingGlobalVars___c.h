#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IPlaneReflection; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AD5CC0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD5D00)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__GET_VALIDLOCALREFLECTION_B__106_0_OFFSET UNITYSDK_OFFSET(0x16AD5D10)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RenderingGlobalVars___c_TypeDefinitionIndex = 29267;

	class RenderingGlobalVars___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::CustomRP::IPlaneReflection*, ::System::Boolean>** StaticGet___9__106_0()
		{
			return (::System::Func_2<::RPG::CustomRP::IPlaneReflection*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars___c_TypeDefinitionIndex)->GetStaticField(0x319A0);
		}
		static ::RPG::CustomRP::RenderingGlobalVars___c** StaticGet___9()
		{
			return (::RPG::CustomRP::RenderingGlobalVars___c**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars___c_TypeDefinitionIndex)->GetStaticField(0x319A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_validLocalReflection_b__106_0(::RPG::CustomRP::IPlaneReflection* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::IPlaneReflection*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__GET_VALIDLOCALREFLECTION_B__106_0_OFFSET))(this, e);
		}
	};
}
