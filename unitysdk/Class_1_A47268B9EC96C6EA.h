#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4BCB31282727A3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A47268B9EC96C6EA_METHOD_1_538009D0B11159B3_OFFSET UNITYSDK_OFFSET(0x14C86EA0)
#define CLASS_1_A47268B9EC96C6EA_METHOD_1_7F3D99FA7CB53A6B_OFFSET UNITYSDK_OFFSET(0x14C86C50)
#define CLASS_1_A47268B9EC96C6EA_METHOD_1_9031256C62D3098E_OFFSET UNITYSDK_OFFSET(0x14C867F0)
#define CLASS_1_A47268B9EC96C6EA_METHOD_1_F41B186524D9B4BE_OFFSET UNITYSDK_OFFSET(0x14C86B00)
#define CLASS_1_A47268B9EC96C6EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C86760)

inline static constexpr unsigned int Class_1_A47268B9EC96C6EA_TypeDefinitionIndex = 86198;

class Class_1_A47268B9EC96C6EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_BB4BCB31282727A3*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_BB4BCB31282727A3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47268B9EC96C6EA_TypeDefinitionIndex)->GetStaticField(0x3EFA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::GuidePoint_AutoGenStrategy Method_1_9031256C62D3098E(::System::String* a1)
	{
		return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA_METHOD_1_9031256C62D3098E_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F3D99FA7CB53A6B(::Class_1_BB4BCB31282727A3* a1)
	{
		return ((::System::Void(*)(::Class_1_BB4BCB31282727A3*))((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA_METHOD_1_7F3D99FA7CB53A6B_OFFSET))(a1);
	}

	static ::System::Void Method_1_538009D0B11159B3(::Class_1_BB4BCB31282727A3* a1)
	{
		return ((::System::Void(*)(::Class_1_BB4BCB31282727A3*))((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA_METHOD_1_538009D0B11159B3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F41B186524D9B4BE(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA_METHOD_1_F41B186524D9B4BE_OFFSET))(a1);
	}
};
