#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/Linq/JEnumerable_1.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JTokenEqualityComparer; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { template <typename T> class IJEnumerable_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDAFTERSELF_OFFSET UNITYSDK_OFFSET(0x1E9EA380)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1E9F3730)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ADDBEFORESELF_OFFSET UNITYSDK_OFFSET(0x1E9EA420)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_AFTERSELF_OFFSET UNITYSDK_OFFSET(0x1E9EA5F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORSANDSELF_OFFSET UNITYSDK_OFFSET(0x1E9EA590)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORS_OFFSET UNITYSDK_OFFSET(0x1E9EA4C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x1E9F40C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x1E9F3FB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_BEFORESELF_OFFSET UNITYSDK_OFFSET(0x1E9EA650)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1E9EA8B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1E9F19F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x1E9F3FA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E9F80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x1E9EAC20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9F1AD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1E9F1DB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1E9F1D50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETANCESTORS_OFFSET UNITYSDK_OFFSET(0x1E9EA520)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1E9EAD20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1E9E9E70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1E9EA7B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9EA6B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET UNITYSDK_OFFSET(0x1E9EA830)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1E9E9FB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1E9E9F50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1E9E9FF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1E9E9FD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1E9E9F70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1E9F3640)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET UNITYSDK_OFFSET(0x1E9F35E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1E9F3AA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9F3AF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x1E9F3A60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_LINQ_IJENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9F19E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1E9EC600)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1E9EC790)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x1E9EC920)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_13_OFFSET UNITYSDK_OFFSET(0x1E9ECAB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_14_OFFSET UNITYSDK_OFFSET(0x1E9ECC40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_15_OFFSET UNITYSDK_OFFSET(0x1E9ECDD0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_16_OFFSET UNITYSDK_OFFSET(0x1E9ED020)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_17_OFFSET UNITYSDK_OFFSET(0x1E9ED280)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_18_OFFSET UNITYSDK_OFFSET(0x1E9ED4E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_19_OFFSET UNITYSDK_OFFSET(0x1E9ED730)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E9EB090)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_20_OFFSET UNITYSDK_OFFSET(0x1E9ED980)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_21_OFFSET UNITYSDK_OFFSET(0x1E9EDB40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_22_OFFSET UNITYSDK_OFFSET(0x1E9EDDB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_23_OFFSET UNITYSDK_OFFSET(0x1E9EE010)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_24_OFFSET UNITYSDK_OFFSET(0x1E9EE1B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_25_OFFSET UNITYSDK_OFFSET(0x1E9EE400)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_26_OFFSET UNITYSDK_OFFSET(0x1E9EE670)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_27_OFFSET UNITYSDK_OFFSET(0x1E9EE800)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_28_OFFSET UNITYSDK_OFFSET(0x1E9EE990)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_29_OFFSET UNITYSDK_OFFSET(0x1E9EECA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E9EB320)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_30_OFFSET UNITYSDK_OFFSET(0x1E9EEE30)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_31_OFFSET UNITYSDK_OFFSET(0x1E9EEFC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_32_OFFSET UNITYSDK_OFFSET(0x1E9EF2A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_33_OFFSET UNITYSDK_OFFSET(0x1E9EF4C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_34_OFFSET UNITYSDK_OFFSET(0x1E9EF7D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_35_OFFSET UNITYSDK_OFFSET(0x1E9EF9A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_36_OFFSET UNITYSDK_OFFSET(0x1E9EFC40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E9EB570)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E9EB700)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E9EB990)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E9EBD30)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E9EBFA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1E9EC210)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1E9EC470)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E9EAF00)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1E9F06B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1E9F0770)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_12_OFFSET UNITYSDK_OFFSET(0x1E9F0820)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_13_OFFSET UNITYSDK_OFFSET(0x1E9F08F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_14_OFFSET UNITYSDK_OFFSET(0x1E9F09C0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_15_OFFSET UNITYSDK_OFFSET(0x1E9F0A90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_16_OFFSET UNITYSDK_OFFSET(0x1E9F0B40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_17_OFFSET UNITYSDK_OFFSET(0x1E9F0BF0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_18_OFFSET UNITYSDK_OFFSET(0x1E9F0CA0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_19_OFFSET UNITYSDK_OFFSET(0x1E9F0D50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E9F0000)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_20_OFFSET UNITYSDK_OFFSET(0x1E9F0E20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_21_OFFSET UNITYSDK_OFFSET(0x1E9F0ED0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_22_OFFSET UNITYSDK_OFFSET(0x1E9F0F80)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_23_OFFSET UNITYSDK_OFFSET(0x1E9F1030)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_24_OFFSET UNITYSDK_OFFSET(0x1E9F10E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_25_OFFSET UNITYSDK_OFFSET(0x1E9F1190)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_26_OFFSET UNITYSDK_OFFSET(0x1E9F1260)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_27_OFFSET UNITYSDK_OFFSET(0x1E9F12F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_28_OFFSET UNITYSDK_OFFSET(0x1E9F13B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_29_OFFSET UNITYSDK_OFFSET(0x1E9F1470)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E9F00D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_30_OFFSET UNITYSDK_OFFSET(0x1E9F1510)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_31_OFFSET UNITYSDK_OFFSET(0x1E9F1600)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_32_OFFSET UNITYSDK_OFFSET(0x1E9F16B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_33_OFFSET UNITYSDK_OFFSET(0x1E9F1760)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_34_OFFSET UNITYSDK_OFFSET(0x1E9F1810)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E9F01A0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E9F0250)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E9F0320)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E9F03D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E9F0480)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1E9F0540)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1E9F05F0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E9EFF40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1E9F32E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET UNITYSDK_OFFSET(0x1E9F3280)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9F2B90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET UNITYSDK_OFFSET(0x1E9F2B30)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVEANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x1E9F4130)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E9EA910)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET UNITYSDK_OFFSET(0x1E9EA990)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_1_OFFSET UNITYSDK_OFFSET(0x1E9F3F20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET UNITYSDK_OFFSET(0x1E9F3EB0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1E9F3B50)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET UNITYSDK_OFFSET(0x1E9F3B40)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_1_OFFSET UNITYSDK_OFFSET(0x1E9F36E0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1E9F3040)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9EA730)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1E9E9FC0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1E9E9F60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1E9E9FE0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9F1990)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9F18D0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F3F90)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1E9F28B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1E9F1E10)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E9EAA70)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EAA20)
#define NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x1E9EAE60)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F43B0)
#define NEWTONSOFT_JSON_LINQ_JTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EA370)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken_TypeDefinitionIndex = 7188;

	class JToken : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_GuidTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x5FF0);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_TimeSpanTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x5FF8);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_BooleanTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6000);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_DateTimeTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6008);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_CharTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6010);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_UriTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6018);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_StringTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6020);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_NumberTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6028);
		}
		static ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>** StaticGet_BytesTypes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6030);
		}
		static ::Newtonsoft::Json::Linq::JTokenEqualityComparer** StaticGet__equalityComparer()
		{
			return (::Newtonsoft::Json::Linq::JTokenEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(JToken_TypeDefinitionIndex)->GetStaticField(0x6038);
		}
		::System::Object* _annotations; // 0x10
		::Newtonsoft::Json::Linq::JToken* _next; // 0x18
		::Newtonsoft::Json::Linq::JToken* _previous; // 0x20
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JTokenEqualityComparer* get_EqualityComparer()
		{
			return ((::Newtonsoft::Json::Linq::JTokenEqualityComparer*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_EQUALITYCOMPARER_OFFSET))();
		}

		::Newtonsoft::Json::Linq::JContainer* get_Parent()
		{
			return ((::Newtonsoft::Json::Linq::JContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Linq::JContainer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PARENT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JToken* get_Root()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ROOT_OFFSET))(this);
		}

		static ::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* t1, ::Newtonsoft::Json::Linq::JToken* t2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPEQUALS_OFFSET))(t1, t2);
		}

		::Newtonsoft::Json::Linq::JToken* get_Next()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_NEXT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JToken* get_Previous()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PREVIOUS_OFFSET))(this);
		}

		::System::Void set_Previous(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_PREVIOUS_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_PATH_OFFSET))(this);
		}

		::System::Void AddAfterSelf(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDAFTERSELF_OFFSET))(this, content);
		}

		::System::Void AddBeforeSelf(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDBEFORESELF_OFFSET))(this, content);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Ancestors()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AncestorsAndSelf()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANCESTORSANDSELF_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetAncestors(::System::Boolean self)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETANCESTORS_OFFSET))(this, self);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AfterSelf()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_AFTERSELF_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* BeforeSelf()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_BEFORESELF_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SET_ITEM_OFFSET))(this, key, value);
		}

		::Newtonsoft::Json::Linq::JToken* get_First()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_FIRST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Last()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GET_LAST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children()
		{
			return ((::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CHILDREN_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVE_OFFSET))(this);
		}

		::System::Void Replace(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REPLACE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::Newtonsoft::Json::Formatting formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOSTRING_1_OFFSET))(this, formatting, converters);
		}

		static ::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ENSUREVALUE_OFFSET))(value);
		}

		static ::System::String* GetType(::Newtonsoft::Json::Linq::JToken* token)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_GETTYPE_OFFSET))(token);
		}

		static ::System::Boolean ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>* validTypes, ::System::Boolean nullable)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Il2CppArray<::Newtonsoft::Json::Linq::JTokenType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_VALIDATETOKEN_OFFSET))(o, validTypes, nullable);
		}

		static ::System::Boolean op_Explicit(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::DateTimeOffset op_Explicit_1(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::DateTimeOffset(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Boolean> op_Explicit_2(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_2_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_3(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Int64(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::DateTime> op_Explicit_4(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::DateTimeOffset> op_Explicit_5(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Decimal> op_Explicit_6(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Double> op_Explicit_7(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Char> op_Explicit_8(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Char>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_8_OFFSET))(value);
		}

		static ::System::Int32 op_Explicit_9(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_9_OFFSET))(value);
		}

		static ::System::Int16 op_Explicit_10(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Int16(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_10_OFFSET))(value);
		}

		static ::System::UInt16 op_Explicit_11(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::UInt16(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_11_OFFSET))(value);
		}

		static ::System::Char op_Explicit_12(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Char(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_12_OFFSET))(value);
		}

		static ::System::Byte op_Explicit_13(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Byte(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_13_OFFSET))(value);
		}

		static ::System::SByte op_Explicit_14(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::SByte(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_14_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int32> op_Explicit_15(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_15_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int16> op_Explicit_16(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Int16>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_16_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::UInt16> op_Explicit_17(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::UInt16>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_17_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Byte> op_Explicit_18(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_18_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::SByte> op_Explicit_19(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::SByte>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_19_OFFSET))(value);
		}

		static ::System::DateTime op_Explicit_20(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::DateTime(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_20_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int64> op_Explicit_21(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_21_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Single> op_Explicit_22(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_22_OFFSET))(value);
		}

		static ::System::Decimal op_Explicit_23(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Decimal(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_23_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::UInt32> op_Explicit_24(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_24_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::UInt64> op_Explicit_25(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_25_OFFSET))(value);
		}

		static ::System::Double op_Explicit_26(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Double(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_26_OFFSET))(value);
		}

		static ::System::Single op_Explicit_27(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Single(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_27_OFFSET))(value);
		}

		static ::System::String* op_Explicit_28(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_28_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_29(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::UInt32(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_29_OFFSET))(value);
		}

		static ::System::UInt64 op_Explicit_30(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::UInt64(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_30_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* op_Explicit_31(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_31_OFFSET))(value);
		}

		static ::System::Guid op_Explicit_32(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Guid(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_32_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Guid> op_Explicit_33(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::Guid>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_33_OFFSET))(value);
		}

		static ::System::TimeSpan op_Explicit_34(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::TimeSpan(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_34_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::TimeSpan> op_Explicit_35(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_35_OFFSET))(value);
		}

		static ::System::Uri* op_Explicit_36(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Uri*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_EXPLICIT_36_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit(::System::Boolean value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_1(::System::DateTimeOffset value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_2(::System::Byte value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_3(::System::Nullable_1<::System::Byte> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_4(::System::SByte value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_5(::System::Nullable_1<::System::SByte> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::SByte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_6(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_7(::System::Int64 value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_7_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_8(::System::Nullable_1<::System::DateTime> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_8_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_9(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_9_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_10(::System::Nullable_1<::System::Decimal> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Decimal>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_10_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_11(::System::Nullable_1<::System::Double> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_11_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_12(::System::Int16 value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_12_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_13(::System::UInt16 value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_13_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_14(::System::Int32 value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_14_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_15(::System::Nullable_1<::System::Int32> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_15_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_16(::System::DateTime value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_16_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_17(::System::Nullable_1<::System::Int64> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_17_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_18(::System::Nullable_1<::System::Single> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_18_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_19(::System::Decimal value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_19_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_20(::System::Nullable_1<::System::Int16> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Int16>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_20_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_21(::System::Nullable_1<::System::UInt16> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::UInt16>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_21_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_22(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_22_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_23(::System::Nullable_1<::System::UInt64> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_23_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_24(::System::Double value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_24_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_25(::System::Single value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_25_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_26(::System::String* value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_26_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_27(::System::UInt32 value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_27_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_28(::System::UInt64 value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_28_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_29(::Il2CppArray<::System::Byte>* value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_29_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_30(::System::Uri* value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_30_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_31(::System::TimeSpan value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_31_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_32(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_32_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_33(::System::Guid value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_33_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JToken* op_Implicit_34(::System::Nullable_1<::System::Guid> value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Nullable_1<::System::Guid>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_OP_IMPLICIT_34_OFFSET))(value);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GETENUMERATOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item(::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_LINQ_IJENUMERABLE_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ITEM_OFFSET))(this, key);
		}

		::Newtonsoft::Json::JsonReader* CreateReader()
		{
			return ((::Newtonsoft::Json::JsonReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_CREATEREADER_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECTINTERNAL_OFFSET))(o, jsonSerializer);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* o)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_OFFSET))(o);
		}

		static ::Newtonsoft::Json::Linq::JToken* FromObject_1(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_FROMOBJECT_1_OFFSET))(o, jsonSerializer);
		}

		::System::Object* ToObject(::System::Type* objectType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_OFFSET))(this, objectType);
		}

		::System::Object* ToObject_1(::System::Type* objectType, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_TOOBJECT_1_OFFSET))(this, objectType, jsonSerializer);
		}

		static ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_OFFSET))(reader);
		}

		static ::Newtonsoft::Json::Linq::JToken* ReadFrom_1(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_READFROM_1_OFFSET))(reader, settings);
		}

		static ::Newtonsoft::Json::Linq::JToken* Parse(::System::String* json)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_OFFSET))(json);
		}

		static ::Newtonsoft::Json::Linq::JToken* Parse_1(::System::String* json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_PARSE_1_OFFSET))(json, settings);
		}

		static ::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_OFFSET))(reader, settings);
		}

		static ::Newtonsoft::Json::Linq::JToken* Load_1(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LOAD_1_OFFSET))(reader);
		}

		::System::Void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_OFFSET))(this, lineInfo, settings);
		}

		::System::Void SetLineInfo_1(::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SETLINEINFO_1_OFFSET))(this, lineNumber, linePosition);
		}

		::System::Boolean Newtonsoft_Json_IJsonLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 Newtonsoft_Json_IJsonLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_NEWTONSOFT_JSON_IJSONLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* SelectToken(::System::String* path)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_OFFSET))(this, path);
		}

		::Newtonsoft::Json::Linq::JToken* SelectToken_1(::System::String* path, ::System::Boolean errorWhenNoMatch)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKEN_1_OFFSET))(this, path, errorWhenNoMatch);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens(::System::String* path)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_OFFSET))(this, path);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens_1(::System::String* path, ::System::Boolean errorWhenNoMatch)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SELECTTOKENS_1_OFFSET))(this, path, errorWhenNoMatch);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* DeepClone()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_DEEPCLONE_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Object* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ADDANNOTATION_OFFSET))(this, annotation);
		}

		::System::Object* Annotation(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATION_OFFSET))(this, type);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* Annotations(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_ANNOTATIONS_OFFSET))(this, type);
		}

		::System::Void RemoveAnnotations(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_REMOVEANNOTATIONS_OFFSET))(this, type);
		}
	};
}
