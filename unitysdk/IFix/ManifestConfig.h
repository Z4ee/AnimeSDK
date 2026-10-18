#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }
namespace System::Text::RegularExpressions { class Regex; }

#define IFIX_MANIFESTCONFIG_GET_ANONYMOUSTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A70)
#define IFIX_MANIFESTCONFIG_GET_CODECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E59B0)
#define IFIX_MANIFESTCONFIG_GET_EXTERNMETHODCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5990)
#define IFIX_MANIFESTCONFIG_GET_EXTERNTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5970)
#define IFIX_MANIFESTCONFIG_GET_FIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E59F0)
#define IFIX_MANIFESTCONFIG_GET_INTERNSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E59D0)
#define IFIX_MANIFESTCONFIG_GET_INTERPRETMETHODSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A30)
#define IFIX_MANIFESTCONFIG_GET_NEWCLASSESCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A50)
#define IFIX_MANIFESTCONFIG_GET_STATICFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A10)
#define IFIX_MANIFESTCONFIG_PARSEMANIFEST_OFFSET UNITYSDK_OFFSET(0x1B9C7AC0)
#define IFIX_MANIFESTCONFIG_SET_ANONYMOUSTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A80)
#define IFIX_MANIFESTCONFIG_SET_CODECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E59C0)
#define IFIX_MANIFESTCONFIG_SET_EXTERNMETHODCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E59A0)
#define IFIX_MANIFESTCONFIG_SET_EXTERNTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5980)
#define IFIX_MANIFESTCONFIG_SET_FIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A00)
#define IFIX_MANIFESTCONFIG_SET_INTERNSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E59E0)
#define IFIX_MANIFESTCONFIG_SET_INTERPRETMETHODSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A40)
#define IFIX_MANIFESTCONFIG_SET_NEWCLASSESCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A60)
#define IFIX_MANIFESTCONFIG_SET_STATICFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9E5A20)
#define IFIX_MANIFESTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5A90)
#define IFIX_MANIFESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E58D0)

namespace IFix
{
	inline static constexpr unsigned int ManifestConfig_TypeDefinitionIndex = 7109;

	class ManifestConfig : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_InterpretMethodsCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_InternStringCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x588);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_FieldCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x590);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_ExternMethodCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x598);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_AnonymousTypeCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5A0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_NewClassesCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5A8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_IgnroeListExp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_ExternTypeCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5B8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_StaticFieldCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5C0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_PatchRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5C8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_IgnroeCellExp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_CodeCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x5D8);
		}
		::System::Collections::Generic::List_1<::System::String*>* NewClasses; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Patches; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* IgnoreMethods; // 0x20
		::System::Int32 _StaticFieldCount_k__BackingField; // 0x28
		::System::Int32 _AnonymousTypeCount_k__BackingField; // 0x2C
		::System::Int32 _InterpretMethodsCount_k__BackingField; // 0x30
		::System::Int32 _ExternTypeCount_k__BackingField; // 0x34
		::System::Int32 _NewClassesCount_k__BackingField; // 0x38
		::System::Int32 _FieldCount_k__BackingField; // 0x3C
		::System::Int32 _InternStringCount_k__BackingField; // 0x40
		::System::Int32 _ExternMethodCount_k__BackingField; // 0x44
		::System::Int32 _CodeCount_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG__CCTOR_OFFSET))();
		}

		::System::Int32 get_ExternTypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_EXTERNTYPECOUNT_OFFSET))(this);
		}

		::System::Void set_ExternTypeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_EXTERNTYPECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ExternMethodCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_EXTERNMETHODCOUNT_OFFSET))(this);
		}

		::System::Void set_ExternMethodCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_EXTERNMETHODCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_CODECOUNT_OFFSET))(this);
		}

		::System::Void set_CodeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_CODECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_InternStringCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_INTERNSTRINGCOUNT_OFFSET))(this);
		}

		::System::Void set_InternStringCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_INTERNSTRINGCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FieldCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_FIELDCOUNT_OFFSET))(this);
		}

		::System::Void set_FieldCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_FIELDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_StaticFieldCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_STATICFIELDCOUNT_OFFSET))(this);
		}

		::System::Void set_StaticFieldCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_STATICFIELDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_InterpretMethodsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_INTERPRETMETHODSCOUNT_OFFSET))(this);
		}

		::System::Void set_InterpretMethodsCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_INTERPRETMETHODSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_NewClassesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_NEWCLASSESCOUNT_OFFSET))(this);
		}

		::System::Void set_NewClassesCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_NEWCLASSESCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_AnonymousTypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_ANONYMOUSTYPECOUNT_OFFSET))(this);
		}

		::System::Void set_AnonymousTypeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_ANONYMOUSTYPECOUNT_OFFSET))(this, a1);
		}

		static ::IFix::ManifestConfig* ParseManifest(::System::IO::Stream* a1)
		{
			return ((::IFix::ManifestConfig*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_PARSEMANIFEST_OFFSET))(a1);
		}
	};
}
