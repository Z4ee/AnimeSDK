#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_A0B58236B258B7B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x102066D0)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_0CAE42641241073F_OFFSET UNITYSDK_OFFSET(0x10206DE0)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_0F491757EDDBF389_OFFSET UNITYSDK_OFFSET(0x10206DF0)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10206C40)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_47CCFD671876C726_OFFSET UNITYSDK_OFFSET(0x10206D90)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_4FE03A4494C53A7D_OFFSET UNITYSDK_OFFSET(0x10206F30)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_5F1295120D2923EF_OFFSET UNITYSDK_OFFSET(0x10206CA0)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x10206F90)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x10206E50)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10206D20)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x102068A0)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_C59E8018450A8EE6_OFFSET UNITYSDK_OFFSET(0x10206D10)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10206840)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10206C00)
#define CLASS_1_A0B58236B258B7B2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10206800)
#define CLASS_1_A0B58236B258B7B2__CTOR_OFFSET UNITYSDK_OFFSET(0x10206890)

inline static constexpr unsigned int Class_1_A0B58236B258B7B2_TypeDefinitionIndex = 52394;

class Class_1_A0B58236B258B7B2 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_1_4; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_1_3; // 0x20
	::MoleMole::MonoRenderHandler* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* Field_1_5; // 0x30
	::Enum_3_7F3F4476896DB547 Field_1_1; // 0x38
	::System::Boolean Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_5F1295120D2923EF(::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_5F1295120D2923EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C59E8018450A8EE6(::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_C59E8018450A8EE6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_47CCFD671876C726(::UnityEngine::Material* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_47CCFD671876C726_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Method_1_0CAE42641241073F()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_0CAE42641241073F_OFFSET))(this);
	}

	::System::Void Method_1_0F491757EDDBF389(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::MonoRenderHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_0F491757EDDBF389_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_4FE03A4494C53A7D()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_4FE03A4494C53A7D_OFFSET))(this);
	}

	::System::Boolean Method_1_A86A455D6AB5B836(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0B58236B258B7B2_METHOD_1_A86A455D6AB5B836_OFFSET))(this, a1);
	}
};
