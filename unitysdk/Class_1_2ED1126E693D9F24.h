#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_938.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class MonsterGroupTemplateExt; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2ED1126E693D9F24_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14608770)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x14608670)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x146082F0)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14608290)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14608C10)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x146085B0)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_43CF9E2F72417EC8_OFFSET UNITYSDK_OFFSET(0x14608F50)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_4EB2C00D488C6932_OFFSET UNITYSDK_OFFSET(0x146089E0)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_7FEDE7ADE3968E36_OFFSET UNITYSDK_OFFSET(0x14609030)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0x14608CA0)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x14608620)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0x14608830)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_CA0D8FB285BDAAFC_OFFSET UNITYSDK_OFFSET(0x146092B0)
#define CLASS_1_2ED1126E693D9F24_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x14608920)
#define CLASS_1_2ED1126E693D9F24__CTOR_OFFSET UNITYSDK_OFFSET(0x14608990)

inline static constexpr unsigned int Class_1_2ED1126E693D9F24_TypeDefinitionIndex = 72192;

class Class_1_2ED1126E693D9F24 : public ::System::Object
{
public:
	::Il2CppArray<::MoleMole::Project::Config::MonsterGroupTemplateExt*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_4; // 0x20
	::Struct_2_1862835F8661A21F_938 Field_1_0; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::MoleMole::Project::Config::MonsterGroupTemplateExt* Method_1_4EB2C00D488C6932(::System::Int32 a1)
	{
		return ((::MoleMole::Project::Config::MonsterGroupTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_4EB2C00D488C6932_OFFSET))(this, a1);
	}

	::System::Void Method_1_8131D4D8C02BAA62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_8131D4D8C02BAA62_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::MoleMole::Project::Config::MonsterGroupTemplateExt* Method_1_7FEDE7ADE3968E36(::System::Int32 a1)
	{
		return ((::MoleMole::Project::Config::MonsterGroupTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_7FEDE7ADE3968E36_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CA0D8FB285BDAAFC(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_CA0D8FB285BDAAFC_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::MoleMole::Project::Config::MonsterGroupTemplateExt*>* Method_1_43CF9E2F72417EC8()
	{
		return ((::Il2CppArray<::MoleMole::Project::Config::MonsterGroupTemplateExt*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_43CF9E2F72417EC8_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ED1126E693D9F24_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
