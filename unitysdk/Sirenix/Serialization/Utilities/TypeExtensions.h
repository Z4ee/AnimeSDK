#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Sirenix::Serialization::Utilities { template <typename T1, typename T2, typename T3> class DoubleLookupDictionary_3; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_AREGENERICCONSTRAINTSSATISFIEDBY_1_OFFSET UNITYSDK_OFFSET(0x1B1128F0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_AREGENERICCONSTRAINTSSATISFIEDBY_OFFSET UNITYSDK_OFFSET(0x1B1017F0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_CREATENICENAME_OFFSET UNITYSDK_OFFSET(0x1B10F690)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_DOUBLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B111520)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_FLOATEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B1114E0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GENERICPARAMETERISFULFILLEDBY_OFFSET UNITYSDK_OFFSET(0x1B112BC0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETALLFIELDSANDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B105420)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETALLPUBLICSTATICMETHODS_OFFSET UNITYSDK_OFFSET(0x1B111480)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETARGUMENTSOFINHERITEDOPENGENERICCLASS_OFFSET UNITYSDK_OFFSET(0x1B111680)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETARGUMENTSOFINHERITEDOPENGENERICINTERFACE_OFFSET UNITYSDK_OFFSET(0x1B101FB0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCACHEDNICENAME_OFFSET UNITYSDK_OFFSET(0x1B10F3A0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCASTMETHODDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B1111F0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCASTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B1104F0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCOMPILABLENICEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1B111730)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1B105480)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETNICEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1B101900)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETNICENAME_OFFSET UNITYSDK_OFFSET(0x1B10FB30)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_HASCASTDEFINED_OFFSET UNITYSDK_OFFSET(0x1B10FFB0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_IMPLEMENTSOPENGENERICCLASS_OFFSET UNITYSDK_OFFSET(0x1B1115D0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_IMPLEMENTSOPENGENERICINTERFACE_OFFSET UNITYSDK_OFFSET(0x1B101EA0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_IMPLEMENTSORINHERITS_OFFSET UNITYSDK_OFFSET(0x1B1115A0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_INHERITSFROM_OFFSET UNITYSDK_OFFSET(0x1B10FC10)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISCASTABLETO_OFFSET UNITYSDK_OFFSET(0x1B110400)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISFULLYCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1B112700)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISVALIDIDENTIFIERPARTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B1111C0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISVALIDIDENTIFIERSTARTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B111190)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISVALIDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B110E40)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_QUATERNIONEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B111560)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_SAFEGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B0FF2B0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1B106AA0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_TRYINFERGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B111840)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_TYPENAMEGAUNTLET_OFFSET UNITYSDK_OFFSET(0x1B10FEA0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1135A0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 7492;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_TypeNameAlternatives()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6180);
		}
		static ::System::Func_3<::System::Double, ::System::Double, ::System::Boolean>** StaticGet_DoubleEqualityComparerFunc()
		{
			return (::System::Func_3<::System::Double, ::System::Double, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6188);
		}
		static ::System::Object** StaticGet_CachedNiceNames_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6190);
		}
		static ::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::System::Type*, ::System::Type*, ::System::Func_2<::System::Object*, ::System::Object*>*>** StaticGet_WeaklyTypedTypeCastDelegates()
		{
			return (::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::System::Type*, ::System::Type*, ::System::Func_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6198);
		}
		static ::System::Object** StaticGet_StronglyTypedTypeCastDelegates_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61A0);
		}
		static ::System::Type** StaticGet_VoidPointerType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61A8);
		}
		static ::System::Collections::Generic::Stack_1<::System::Type*>** StaticGet_GenericArgumentsContainsTypes_ArgsToCheckCached()
		{
			return (::System::Collections::Generic::Stack_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_GenericConstraintsSatisfactionResolvedMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61B8);
		}
		static ::System::Type** StaticGet_GenericListInterface()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61C0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_TwoLengthTypeArray_Cached()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61C8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_GenericConstraintsSatisfactionProcessedParams()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_GenericConstraintsSatisfactionInferredParameters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61D8);
		}
		static ::System::Func_3<::System::Single, ::System::Single, ::System::Boolean>** StaticGet_FloatEqualityComparerFunc()
		{
			return (::System::Func_3<::System::Single, ::System::Single, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61E0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_ExplicitCastIntegrals()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61E8);
		}
		static ::System::Object** StaticGet_GenericConstraintsSatisfaction_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61F0);
		}
		static ::System::Type** StaticGet_GenericCollectionInterface()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x61F8);
		}
		static ::System::Func_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Boolean>** StaticGet_QuaternionEqualityComparerFunc()
		{
			return (::System::Func_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6200);
		}
		static ::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::System::Type*, ::System::Type*, ::System::Delegate*>** StaticGet_StronglyTypedTypeCastDelegates()
		{
			return (::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::System::Type*, ::System::Type*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6208);
		}
		static ::System::Object** StaticGet_WeaklyTypedTypeCastDelegates_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6210);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ReservedCSharpKeywords()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6218);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_CachedNiceNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6220);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::HashSet_1<::System::Type*>*>** StaticGet_PrimitiveImplicitCasts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::HashSet_1<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(TypeExtensions_TypeDefinitionIndex)->GetStaticField(0x6228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::String* GetCachedNiceName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCACHEDNICENAME_OFFSET))(type);
		}

		static ::System::String* CreateNiceName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_CREATENICENAME_OFFSET))(type);
		}

		static ::System::Boolean HasCastDefined(::System::Type* from, ::System::Type* to, ::System::Boolean requireImplicitCast)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_HASCASTDEFINED_OFFSET))(from, to, requireImplicitCast);
		}

		static ::System::Boolean IsValidIdentifier(::System::String* identifier)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISVALIDIDENTIFIER_OFFSET))(identifier);
		}

		static ::System::Boolean IsValidIdentifierStartCharacter(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISVALIDIDENTIFIERSTARTCHARACTER_OFFSET))(c);
		}

		static ::System::Boolean IsValidIdentifierPartCharacter(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISVALIDIDENTIFIERPARTCHARACTER_OFFSET))(c);
		}

		static ::System::Boolean IsCastableTo(::System::Type* from, ::System::Type* to, ::System::Boolean requireImplicitCast)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISCASTABLETO_OFFSET))(from, to, requireImplicitCast);
		}

		static ::System::Func_2<::System::Object*, ::System::Object*>* GetCastMethodDelegate(::System::Type* from, ::System::Type* to, ::System::Boolean requireImplicitCast)
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCASTMETHODDELEGATE_OFFSET))(from, to, requireImplicitCast);
		}

		static ::System::Reflection::MethodInfo* GetCastMethod(::System::Type* from, ::System::Type* to, ::System::Boolean requireImplicitCast)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCASTMETHOD_OFFSET))(from, to, requireImplicitCast);
		}

		static ::System::Boolean FloatEqualityComparer(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_FLOATEQUALITYCOMPARER_OFFSET))(a, b);
		}

		static ::System::Boolean DoubleEqualityComparer(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_DOUBLEEQUALITYCOMPARER_OFFSET))(a, b);
		}

		static ::System::Boolean QuaternionEqualityComparer(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_QUATERNIONEQUALITYCOMPARER_OFFSET))(a, b);
		}

		static ::System::Boolean ImplementsOrInherits(::System::Type* type, ::System::Type* to)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_IMPLEMENTSORINHERITS_OFFSET))(type, to);
		}

		static ::System::Boolean ImplementsOpenGenericInterface(::System::Type* candidateType, ::System::Type* openGenericInterfaceType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_IMPLEMENTSOPENGENERICINTERFACE_OFFSET))(candidateType, openGenericInterfaceType);
		}

		static ::System::Boolean ImplementsOpenGenericClass(::System::Type* candidateType, ::System::Type* openGenericType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_IMPLEMENTSOPENGENERICCLASS_OFFSET))(candidateType, openGenericType);
		}

		static ::Il2CppArray<::System::Type*>* GetArgumentsOfInheritedOpenGenericClass(::System::Type* candidateType, ::System::Type* openGenericType)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETARGUMENTSOFINHERITEDOPENGENERICCLASS_OFFSET))(candidateType, openGenericType);
		}

		static ::Il2CppArray<::System::Type*>* GetArgumentsOfInheritedOpenGenericInterface(::System::Type* candidateType, ::System::Type* openGenericInterfaceType)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETARGUMENTSOFINHERITEDOPENGENERICINTERFACE_OFFSET))(candidateType, openGenericInterfaceType);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetAllPublicStaticMethods(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETALLPUBLICSTATICMETHODS_OFFSET))(type);
		}

		static ::System::String* TypeNameGauntlet(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_TYPENAMEGAUNTLET_OFFSET))(type);
		}

		static ::System::String* GetNiceName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETNICENAME_OFFSET))(type);
		}

		static ::System::String* GetNiceFullName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETNICEFULLNAME_OFFSET))(type);
		}

		static ::System::String* GetCompilableNiceFullName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETCOMPILABLENICEFULLNAME_OFFSET))(type);
		}

		static ::System::Boolean InheritsFrom(::System::Type* type, ::System::Type* baseType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_INHERITSFROM_OFFSET))(type, baseType);
		}

		static ::System::Boolean TryInferGenericParameters(::System::Type* genericTypeDefinition, ::Il2CppArray<::System::Type*>*& inferredParams, ::Il2CppArray<::System::Type*>* knownParameters)
		{
			return ((::System::Boolean(*)(::System::Type*, ::Il2CppArray<::System::Type*>*&, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_TRYINFERGENERICPARAMETERS_OFFSET))(genericTypeDefinition, inferredParams, knownParameters);
		}

		static ::System::Boolean AreGenericConstraintsSatisfiedBy(::System::Type* genericType, ::Il2CppArray<::System::Type*>* parameters)
		{
			return ((::System::Boolean(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_AREGENERICCONSTRAINTSSATISFIEDBY_OFFSET))(genericType, parameters);
		}

		static ::System::Boolean AreGenericConstraintsSatisfiedBy_1(::Il2CppArray<::System::Type*>* definitions, ::Il2CppArray<::System::Type*>* parameters)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_AREGENERICCONSTRAINTSSATISFIEDBY_1_OFFSET))(definitions, parameters);
		}

		static ::System::Boolean GenericParameterIsFulfilledBy(::System::Type* genericParameterDefinition, ::System::Type* parameterType, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* resolvedMap, ::System::Collections::Generic::HashSet_1<::System::Type*>* processedParams)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*, ::System::Collections::Generic::HashSet_1<::System::Type*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GENERICPARAMETERISFULFILLEDBY_OFFSET))(genericParameterDefinition, parameterType, resolvedMap, processedParams);
		}

		static ::System::Boolean IsFullyConstructedGenericType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_ISFULLYCONSTRUCTEDGENERICTYPE_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Object*>* SafeGetCustomAttributes(::System::Reflection::Assembly* assembly, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_SAFEGETCUSTOMATTRIBUTES_OFFSET))(assembly, type, inherit);
		}

		static ::System::Object* GetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* obj)
		{
			return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETMEMBERVALUE_OFFSET))(member, obj);
		}

		static ::System::Void SetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_SETMEMBERVALUE_OFFSET))(member, obj, value);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* GetAllFieldsAndProperties(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS_GETALLFIELDSANDPROPERTIES_OFFSET))(type);
		}
	};
}
