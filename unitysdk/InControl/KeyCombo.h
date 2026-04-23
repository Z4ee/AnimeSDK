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

#define INCONTROL_KEYCOMBO_ADDEXCLUDEINT_OFFSET UNITYSDK_OFFSET(0x2297500)
#define INCONTROL_KEYCOMBO_ADDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x2297500)
#define INCONTROL_KEYCOMBO_ADDINCLUDEINT_OFFSET UNITYSDK_OFFSET(0x22974A0)
#define INCONTROL_KEYCOMBO_ADDINCLUDE_OFFSET UNITYSDK_OFFSET(0x22974A0)
#define INCONTROL_KEYCOMBO_ADD_OFFSET UNITYSDK_OFFSET(0x22974A0)
#define INCONTROL_KEYCOMBO_ANDNOT_OFFSET UNITYSDK_OFFSET(0x2297560)
#define INCONTROL_KEYCOMBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x22975E0)
#define INCONTROL_KEYCOMBO_DETECT_OFFSET UNITYSDK_OFFSET(0x17179FE0)
#define INCONTROL_KEYCOMBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2297620)
#define INCONTROL_KEYCOMBO_GETEXCLUDEINT_OFFSET UNITYSDK_OFFSET(0x2297530)
#define INCONTROL_KEYCOMBO_GETEXCLUDE_OFFSET UNITYSDK_OFFSET(0x2297550)
#define INCONTROL_KEYCOMBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2297650)
#define INCONTROL_KEYCOMBO_GETINCLUDEINT_OFFSET UNITYSDK_OFFSET(0x22974D0)
#define INCONTROL_KEYCOMBO_GETINCLUDE_OFFSET UNITYSDK_OFFSET(0x22974F0)
#define INCONTROL_KEYCOMBO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x59D0)
#define INCONTROL_KEYCOMBO_GET_EXCLUDECOUNT_OFFSET UNITYSDK_OFFSET(0x68F0)
#define INCONTROL_KEYCOMBO_GET_INCLUDECOUNT_OFFSET UNITYSDK_OFFSET(0x59D0)
#define INCONTROL_KEYCOMBO_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x2297600)
#define INCONTROL_KEYCOMBO_GET_OFFSET UNITYSDK_OFFSET(0x22974F0)
#define INCONTROL_KEYCOMBO_LOAD_OFFSET UNITYSDK_OFFSET(0x2297680)
#define INCONTROL_KEYCOMBO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1717C610)
#define INCONTROL_KEYCOMBO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1717CF20)
#define INCONTROL_KEYCOMBO_SAVE_OFFSET UNITYSDK_OFFSET(0x2297690)
#define INCONTROL_KEYCOMBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2297610)
#define INCONTROL_KEYCOMBO_WITH_OFFSET UNITYSDK_OFFSET(0x1717CD70)
#define INCONTROL_KEYCOMBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1717CF70)
#define INCONTROL_KEYCOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x2297390)

namespace InControl
{
	inline static constexpr unsigned int KeyCombo_TypeDefinitionIndex = 37106;

	struct alignas(8) KeyCombo
	{
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_cachedStrings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KeyCombo_TypeDefinitionIndex)->GetStaticField(0xC5A0);
		}
		static ::System::Text::StringBuilder** StaticGet_cachedStringBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(KeyCombo_TypeDefinitionIndex)->GetStaticField(0xC5A8);
		}
		static ::InControl::KeyCombo* StaticGet_Empty()
		{
			return (::InControl::KeyCombo*)Il2CppClass::FromTypeDefinitionIndex(KeyCombo_TypeDefinitionIndex)->GetStaticField(0x49D0);
		}
		::System::Int32 includeSize; // 0x10
		::System::UInt64 includeData; // 0x18
		::System::Int32 excludeSize; // 0x20
		::System::UInt64 excludeData; // 0x28

		::System::Void _ctor(::Il2CppArray<::InControl::Key>* keys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO__CTOR_OFFSET))(this, keys);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO__CCTOR_OFFSET))();
		}

		::System::Void AddIncludeInt(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDINCLUDEINT_OFFSET))(this, key);
		}

		::System::Int32 GetIncludeInt(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETINCLUDEINT_OFFSET))(this, index);
		}

		::System::Void Add(::InControl::Key key)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADD_OFFSET))(this, key);
		}

		::InControl::Key Get(::System::Int32 index)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GET_OFFSET))(this, index);
		}

		::System::Void AddInclude(::InControl::Key key)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDINCLUDE_OFFSET))(this, key);
		}

		::InControl::Key GetInclude(::System::Int32 index)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETINCLUDE_OFFSET))(this, index);
		}

		::System::Void AddExcludeInt(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDEXCLUDEINT_OFFSET))(this, key);
		}

		::System::Int32 GetExcludeInt(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETEXCLUDEINT_OFFSET))(this, index);
		}

		::System::Void AddExclude(::InControl::Key key)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ADDEXCLUDE_OFFSET))(this, key);
		}

		::InControl::Key GetExclude(::System::Int32 index)
		{
			return ((::InControl::Key(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETEXCLUDE_OFFSET))(this, index);
		}

		static ::InControl::KeyCombo With(::Il2CppArray<::InControl::Key>* keys)
		{
			return ((::InControl::KeyCombo(*)(::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_WITH_OFFSET))(keys);
		}

		::InControl::KeyCombo AndNot(::Il2CppArray<::InControl::Key>* keys)
		{
			return ((::InControl::KeyCombo(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_ANDNOT_OFFSET))(this, keys);
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

		static ::InControl::KeyCombo Detect(::System::Boolean modifiersAsKeys)
		{
			return ((::InControl::KeyCombo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_DETECT_OFFSET))(modifiersAsKeys);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::InControl::KeyCombo a, ::InControl::KeyCombo b)
		{
			return ((::System::Boolean(*)(::InControl::KeyCombo, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::KeyCombo a, ::InControl::KeyCombo b)
		{
			return ((::System::Boolean(*)(::InControl::KeyCombo, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_KEYCOMBO_SAVE_OFFSET))(this, writer);
		}
	};
}
