#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F4BC0015EEAF0CC2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__ADDPRESENT_B__32_1_OFFSET UNITYSDK_OFFSET(0x98744D0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9874480)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98744C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c_TypeDefinitionIndex = 52361;

	class GridFightOrbManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_F4BC0015EEAF0CC2*, ::System::Boolean>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::Class_1_F4BC0015EEAF0CC2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbManager___c_TypeDefinitionIndex)->GetStaticField(0x17A10);
		}
		static ::RPG::Client::GridFightOrbManager___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightOrbManager___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightOrbManager___c_TypeDefinitionIndex)->GetStaticField(0x17A18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddPresent_b__32_1(::Class_1_F4BC0015EEAF0CC2* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F4BC0015EEAF0CC2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__ADDPRESENT_B__32_1_OFFSET))(this, x);
		}
	};
}
