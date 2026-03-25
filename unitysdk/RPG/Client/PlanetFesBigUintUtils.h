#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesUnitType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_66;
namespace RPG::GameCore { class PlanetFesBigInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEBIGINTEGERFROMPLANETFESBIGINTSTR_OFFSET UNITYSDK_OFFSET(0x9F899D0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEFROMPLANETFESBIGINT_OFFSET UNITYSDK_OFFSET(0x9F897F0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9F88BB0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F8A3A0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_GETROUGHPROPORTION_OFFSET UNITYSDK_OFFSET(0x9F8AC80)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEBYUNITTYPE_OFFSET UNITYSDK_OFFSET(0x9F8A140)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEMAXUNITTYPE_OFFSET UNITYSDK_OFFSET(0x9F89C00)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_ROUGHLERP_OFFSET UNITYSDK_OFFSET(0x9F8B310)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9F89670)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x9F89770)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9F895F0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_UINTTOUNITTYPE_OFFSET UNITYSDK_OFFSET(0x9F89990)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_UNITTYPETOUINT_OFFSET UNITYSDK_OFFSET(0x9F89950)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F8B620)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__FORMATWITHMINEFFECTIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x9F8A8A0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__GETDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x9F8A820)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__GETINTEGERDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x9F8AA30)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__GETPOWEROFTEN_OFFSET UNITYSDK_OFFSET(0x9F8B1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBigUintUtils_TypeDefinitionIndex = 54062;

	class PlanetFesBigUintUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesUnitType, ::System::Numerics::BigInteger>** StaticGet__LUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesUnitType, ::System::Numerics::BigInteger>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x466E0);
		}
		static ::System::Numerics::BigInteger* StaticGet__RoughRatio()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x466E8);
		}
		static ::System::UInt32* StaticGet__RoughLerpRatio()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x12580);
		}
		static ::System::Int32* StaticGet__ExpMultiplier()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x12584);
		}
		static ::System::Single* StaticGet__fRoughRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x12588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Numerics::BigInteger DeSerialize(::Class_1_6E708EAB438EC183_66* bigUint)
		{
			return ((::System::Numerics::BigInteger(*)(::Class_1_6E708EAB438EC183_66*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_DESERIALIZE_OFFSET))(bigUint);
		}

		static ::System::Numerics::BigInteger ToBigInteger(::Class_1_6E708EAB438EC183_66* bigUint)
		{
			return ((::System::Numerics::BigInteger(*)(::Class_1_6E708EAB438EC183_66*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_OFFSET))(bigUint);
		}

		static ::Class_1_6E708EAB438EC183_66* Serialize(::System::Numerics::BigInteger bigInteger)
		{
			return ((::Class_1_6E708EAB438EC183_66*(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_SERIALIZE_OFFSET))(bigInteger);
		}

		static ::System::Numerics::BigInteger ToBigInteger_1(::RPG::GameCore::PlanetFesBigInt* bigInt)
		{
			return ((::System::Numerics::BigInteger(*)(::RPG::GameCore::PlanetFesBigInt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_1_OFFSET))(bigInt);
		}

		static ::System::Numerics::BigInteger CreateFromPlanetFesBigInt(::RPG::GameCore::PlanetFesBigInt* bigInt)
		{
			return ((::System::Numerics::BigInteger(*)(::RPG::GameCore::PlanetFesBigInt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEFROMPLANETFESBIGINT_OFFSET))(bigInt);
		}

		static ::System::UInt32 UnitTypeToUint(::RPG::GameCore::PlanetFesUnitType type)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::PlanetFesUnitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_UNITTYPETOUINT_OFFSET))(type);
		}

		static ::RPG::GameCore::PlanetFesUnitType UintToUnitType(::System::UInt32 type)
		{
			return ((::RPG::GameCore::PlanetFesUnitType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_UINTTOUNITTYPE_OFFSET))(type);
		}

		static ::System::Numerics::BigInteger CreateBigIntegerFromPlanetFesBigIntStr(::System::String* input)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEBIGINTEGERFROMPLANETFESBIGINTSTR_OFFSET))(input);
		}

		static ::RPG::GameCore::PlanetFesUnitType GetValueMaxUnitType(::System::Numerics::BigInteger value)
		{
			return ((::RPG::GameCore::PlanetFesUnitType(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEMAXUNITTYPE_OFFSET))(value);
		}

		static ::System::Numerics::BigInteger GetValueByUnitType(::RPG::GameCore::PlanetFesUnitType type)
		{
			return ((::System::Numerics::BigInteger(*)(::RPG::GameCore::PlanetFesUnitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEBYUNITTYPE_OFFSET))(type);
		}

		static ::System::String* Format(::System::Numerics::BigInteger value, ::System::Int32 leastNum)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_FORMAT_OFFSET))(value, leastNum);
		}

		static ::System::Int32 _GetDigitCount(::System::Int32 num)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__GETDIGITCOUNT_OFFSET))(num);
		}

		static ::System::String* _FormatWithMinEffectiveDigits(::System::Single number, ::System::Int32 minEffectiveDigits)
		{
			return ((::System::String*(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__FORMATWITHMINEFFECTIVEDIGITS_OFFSET))(number, minEffectiveDigits);
		}

		static ::System::Int32 _GetIntegerDigitCount(::System::Single value)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__GETINTEGERDIGITCOUNT_OFFSET))(value);
		}

		static ::System::Single GetRoughProportion(::System::Numerics::BigInteger a, ::System::Numerics::BigInteger b)
		{
			return ((::System::Single(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_GETROUGHPROPORTION_OFFSET))(a, b);
		}

		static ::System::Int32 _GetPowerOfTen(::System::Numerics::BigInteger v)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__GETPOWEROFTEN_OFFSET))(v);
		}

		static ::System::Numerics::BigInteger RoughLerp(::System::Numerics::BigInteger a, ::System::Numerics::BigInteger b, ::System::Single t)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_ROUGHLERP_OFFSET))(a, b, t);
		}
	};
}
