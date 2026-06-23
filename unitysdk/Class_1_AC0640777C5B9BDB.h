#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCoopVFXConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_AC0640777C5B9BDB_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x133BB940)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x133BBE70)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x133BB780)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_1_OFFSET UNITYSDK_OFFSET(0x133BBC00)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_2_OFFSET UNITYSDK_OFFSET(0x133BBFD0)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_3_OFFSET UNITYSDK_OFFSET(0x133BC240)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_4_OFFSET UNITYSDK_OFFSET(0x133BC4B0)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_OFFSET UNITYSDK_OFFSET(0x133BB510)
#define CLASS_1_AC0640777C5B9BDB_METHOD_1_F2B2D561237B582F_OFFSET UNITYSDK_OFFSET(0x133BB990)
#define CLASS_1_AC0640777C5B9BDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x133BB500)

inline static constexpr unsigned int Class_1_AC0640777C5B9BDB_TypeDefinitionIndex = 63442;

class Class_1_AC0640777C5B9BDB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCoopVFXConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigCoopVFXConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0640777C5B9BDB_TypeDefinitionIndex)->GetStaticField(0x4B800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_F1785ED1F654A517()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Method_1_F2B2D561237B582F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_F2B2D561237B582F_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_F1785ED1F654A517_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_1_OFFSET))();
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_F1785ED1F654A517_2()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_2_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_F1785ED1F654A517_3()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_3_OFFSET))();
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_F1785ED1F654A517_4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0640777C5B9BDB_METHOD_1_F1785ED1F654A517_4_OFFSET))();
	}
};
