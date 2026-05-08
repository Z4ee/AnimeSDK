#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_59F0E78803D70076;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6B2249ED4E7CC47F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1008F5E0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_0086B44DBE5B0F28_OFFSET UNITYSDK_OFFSET(0x1008F6F0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0x10091990)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_3EE1BF1DD4C9EB2C_OFFSET UNITYSDK_OFFSET(0x10091AC0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_4F1A3D4E1D16F1E9_OFFSET UNITYSDK_OFFSET(0x10092800)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_514A62A81B6D1373_OFFSET UNITYSDK_OFFSET(0x1008FD10)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x1008F330)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_556EDA6305A13B93_OFFSET UNITYSDK_OFFSET(0x1008FF50)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10092C60)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_8AB67EADA91947EF_1_OFFSET UNITYSDK_OFFSET(0x10092230)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_8AB67EADA91947EF_OFFSET UNITYSDK_OFFSET(0x1008F880)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_928CB4D70C21FDF4_OFFSET UNITYSDK_OFFSET(0x1008FB80)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1008F5A0)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1008F380)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x10092530)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_F470D97555B6BE99_OFFSET UNITYSDK_OFFSET(0x10090F40)
#define CLASS_2_6B2249ED4E7CC47F_METHOD_2_F60185C02B03D5AC_OFFSET UNITYSDK_OFFSET(0x10091E20)
#define CLASS_2_6B2249ED4E7CC47F_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1008F2F0)
#define CLASS_2_6B2249ED4E7CC47F__CTOR_OFFSET UNITYSDK_OFFSET(0x1008EFF0)

inline static constexpr unsigned int Class_2_6B2249ED4E7CC47F_TypeDefinitionIndex = 60170;

class Class_2_6B2249ED4E7CC47F : public ::Foundation::SingletonDisposable_1<::Class_2_6B2249ED4E7CC47F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x20
	::System::UInt32 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_0086B44DBE5B0F28(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_0086B44DBE5B0F28_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AB67EADA91947EF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_8AB67EADA91947EF_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_514A62A81B6D1373(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EntityType a2, ::System::Int32 a3, ::MoleMole::Config::CampType a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Single a7, ::System::Collections::Generic::List_1<::System::String*>* a8, ::System::String* a9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a10, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a11, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a12, ::System::String* a13, ::System::Int32 a14, ::System::Int32 a15)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType, ::System::Int32, ::MoleMole::Config::CampType, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_514A62A81B6D1373_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	::System::Void Method_2_928CB4D70C21FDF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_928CB4D70C21FDF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A4B9B2045975F53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_0A4B9B2045975F53_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_F470D97555B6BE99(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a6, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a7, ::System::Int32 a8)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_F470D97555B6BE99_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_3EE1BF1DD4C9EB2C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_3EE1BF1DD4C9EB2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F60185C02B03D5AC(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_F60185C02B03D5AC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8AB67EADA91947EF_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_8AB67EADA91947EF_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_556EDA6305A13B93(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a6, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a7, ::System::String* a8, ::System::Int32 a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_556EDA6305A13B93_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_4F1A3D4E1D16F1E9(::MoleMole::Battle::Entity* a1, ::Class_3_59F0E78803D70076* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_59F0E78803D70076*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_4F1A3D4E1D16F1E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B2249ED4E7CC47F_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
