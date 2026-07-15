#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_KEYCOMBO_ADDEXCLUDEINT_OFFSET UNITYSDK_OFFSET(0x39548D0)
#define INCONTROL_KEYCOMBO_ADDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x39548D0)
#define INCONTROL_KEYCOMBO_ADDINCLUDEINT_OFFSET UNITYSDK_OFFSET(0x3954870)
#define INCONTROL_KEYCOMBO_ADDINCLUDE_OFFSET UNITYSDK_OFFSET(0x3954870)
#define INCONTROL_KEYCOMBO_ADD_OFFSET UNITYSDK_OFFSET(0x3954870)
#define INCONTROL_KEYCOMBO_ANDNOT_OFFSET UNITYSDK_OFFSET(0x3954930)
#define INCONTROL_KEYCOMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x39549B0)
#define INCONTROL_KEYCOMBO_DETECT_OFFSET UNITYSDK_OFFSET(0x17348800)
#define INCONTROL_KEYCOMBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x39549F0)
#define INCONTROL_KEYCOMBO_GETEXCLUDEINT_OFFSET UNITYSDK_OFFSET(0x3954900)
#define INCONTROL_KEYCOMBO_GETEXCLUDE_OFFSET UNITYSDK_OFFSET(0x3954920)
#define INCONTROL_KEYCOMBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3954A20)
#define INCONTROL_KEYCOMBO_GETINCLUDEINT_OFFSET UNITYSDK_OFFSET(0x39548A0)
#define INCONTROL_KEYCOMBO_GETINCLUDE_OFFSET UNITYSDK_OFFSET(0x39548C0)
#define INCONTROL_KEYCOMBO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x167710)
#define INCONTROL_KEYCOMBO_GET_EXCLUDECOUNT_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define INCONTROL_KEYCOMBO_GET_INCLUDECOUNT_OFFSET UNITYSDK_OFFSET(0x167710)
#define INCONTROL_KEYCOMBO_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x39549D0)
#define INCONTROL_KEYCOMBO_GET_OFFSET UNITYSDK_OFFSET(0x39548C0)
#define INCONTROL_KEYCOMBO_LOAD_OFFSET UNITYSDK_OFFSET(0x3954A50)
#define INCONTROL_KEYCOMBO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1734AE30)
#define INCONTROL_KEYCOMBO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1734BB00)
#define INCONTROL_KEYCOMBO_SAVE_OFFSET UNITYSDK_OFFSET(0x3954A60)
#define INCONTROL_KEYCOMBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39549E0)
#define INCONTROL_KEYCOMBO_WITH_OFFSET UNITYSDK_OFFSET(0x1734B950)
#define INCONTROL_KEYCOMBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1734BB50)
#define INCONTROL_KEYCOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x3954760)

namespace InControl
{
	inline static constexpr unsigned int KeyCombo_TypeDefinitionIndex = 38646;

	struct alignas(8) KeyCombo
	{
		static ::System::Text::StringBuilder** StaticGet_cachedStringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(KeyCombo_TypeDefinitionIndex)->GetStaticField(0x1D4E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_cachedStrings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KeyCombo_TypeDefinitionIndex)->GetStaticField(0x1D4E8);
		}
		static ::InControl::KeyCombo* StaticGet_Empty()
		{
			return (::InControl::KeyCombo*)Il2CppClass::FromTypeDefinitionIndex(KeyCombo_TypeDefinitionIndex)->GetStaticField(0x6720);
		}
		::System::Int32 includeSize; // 0x10
		::System::UInt64 includeData; // 0x18
		::System::Int32 excludeSize; // 0x20
		::System::UInt64 excludeData; // 0x28

		::System::Void _ctor(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO__CCTOR_OFFSET))();
		}

		::System::Void AddIncludeInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDINCLUDEINT_OFFSET))(this, a1);
		}

		::System::Int32 GetIncludeInt(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETINCLUDEINT_OFFSET))(this, a1);
		}

		::System::Void Add(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADD_OFFSET))(this, a1);
		}

		::InControl::Key Get(::System::Int32 a1)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_OFFSET))(this, a1);
		}

		::System::Void AddInclude(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDINCLUDE_OFFSET))(this, a1);
		}

		::InControl::Key GetInclude(::System::Int32 a1)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETINCLUDE_OFFSET))(this, a1);
		}

		::System::Void AddExcludeInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDEXCLUDEINT_OFFSET))(this, a1);
		}

		::System::Int32 GetExcludeInt(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETEXCLUDEINT_OFFSET))(this, a1);
		}

		::System::Void AddExclude(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDEXCLUDE_OFFSET))(this, a1);
		}

		::InControl::Key GetExclude(::System::Int32 a1)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETEXCLUDE_OFFSET))(this, a1);
		}

		static ::InControl::KeyCombo With(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::InControl::KeyCombo(*)(::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_WITH_OFFSET))(a1);
		}

		::InControl::KeyCombo AndNot(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::InControl::KeyCombo(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ANDNOT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_IncludeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_INCLUDECOUNT_OFFSET))(this);
		}

		::System::Int32 get_ExcludeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_EXCLUDECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_ISPRESSED_OFFSET))(this);
		}

		static ::InControl::KeyCombo Detect(::System::Boolean a1)
		{
			return ((::InControl::KeyCombo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_DETECT_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::InControl::KeyCombo a1, ::InControl::KeyCombo a2)
		{
			return ((::System::Boolean(*)(::InControl::KeyCombo, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::KeyCombo a1, ::InControl::KeyCombo a2)
		{
			return ((::System::Boolean(*)(::InControl::KeyCombo, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_SAVE_OFFSET))(this, a1);
		}
	};
}
