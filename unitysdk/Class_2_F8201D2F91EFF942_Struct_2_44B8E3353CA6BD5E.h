#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F8201D2F91EFF942_VideoCommandType.h"
#include "unitysdk/Struct_2_BDD5FBBF6DBFFD8D.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_F8201D2F91EFF942_STRUCT_2_44B8E3353CA6BD5E_METHOD_2_86CDE59560F1B467_OFFSET UNITYSDK_OFFSET(0xB13B2A0)
#define CLASS_2_F8201D2F91EFF942_STRUCT_2_44B8E3353CA6BD5E_METHOD_2_FE5BD62F9B9E0F6F_OFFSET UNITYSDK_OFFSET(0xB13A640)
#define CLASS_2_F8201D2F91EFF942_STRUCT_2_44B8E3353CA6BD5E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB13B480)

inline static constexpr unsigned int Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E_TypeDefinitionIndex = 73223;

struct alignas(8) Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E
{
	static ::Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E* StaticGet_NLCDGIPGFDJ()
	{
		return (::Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E_TypeDefinitionIndex)->GetStaticField(0x4A870);
	}
	::Class_2_F8201D2F91EFF942_VideoCommandType GMPGDEINODK; // 0x10
	::System::String* MIFHCMJGIHO; // 0x18
	::System::String* HKEKKDELNBM; // 0x20
	::System::String* BIALKIEJDOL; // 0x28
	::System::Boolean BNIMJJNOLAI; // 0x30
	::Struct_2_BDD5FBBF6DBFFD8D FBBHGDEMJJH; // 0x38
	::System::Action* ANAOOKCOBFJ; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_STRUCT_2_44B8E3353CA6BD5E__CCTOR_OFFSET))();
	}

	static ::Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E Method_2_FE5BD62F9B9E0F6F(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::Action* a4)
	{
		return ((::Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E(*)(::System::String*, ::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_STRUCT_2_44B8E3353CA6BD5E_METHOD_2_FE5BD62F9B9E0F6F_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E Method_2_86CDE59560F1B467()
	{
		return ((::Class_2_F8201D2F91EFF942_Struct_2_44B8E3353CA6BD5E(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_STRUCT_2_44B8E3353CA6BD5E_METHOD_2_86CDE59560F1B467_OFFSET))();
	}
};
