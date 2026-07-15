#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ResolveDump_Tex.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_CUSTOMRP_RESOLVEDUMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C2A9E0)
#define RPG_CUSTOMRP_RESOLVEDUMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2AA20)
#define RPG_CUSTOMRP_RESOLVEDUMP___C___SAVETOLOCAL_B__7_0_OFFSET UNITYSDK_OFFSET(0x16C2AA30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ResolveDump___c_TypeDefinitionIndex = 36202;

	class ResolveDump___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::CustomRP::ResolveDump_Tex>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::CustomRP::ResolveDump_Tex>**)Il2CppClass::FromTypeDefinitionIndex(ResolveDump___c_TypeDefinitionIndex)->GetStaticField(0x60BF0);
		}
		static ::RPG::CustomRP::ResolveDump___c** StaticGet___9()
		{
			return (::RPG::CustomRP::ResolveDump___c**)Il2CppClass::FromTypeDefinitionIndex(ResolveDump___c_TypeDefinitionIndex)->GetStaticField(0x60BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SaveToLocal_b__7_0(::RPG::CustomRP::ResolveDump_Tex a1, ::RPG::CustomRP::ResolveDump_Tex a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::ResolveDump_Tex, ::RPG::CustomRP::ResolveDump_Tex))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP___C___SAVETOLOCAL_B__7_0_OFFSET))(this, a1, a2);
		}
	};
}
