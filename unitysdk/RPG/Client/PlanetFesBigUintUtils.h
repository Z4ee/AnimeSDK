#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesUnitType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_81;
namespace RPG::GameCore { class PlanetFesBigInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEBIGINTEGERFROMPLANETFESBIGINTSTR_OFFSET UNITYSDK_OFFSET(0x1C361FC0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEFROMPLANETFESBIGINT_OFFSET UNITYSDK_OFFSET(0x1C361DF0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C3611A0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_FORMAT_OFFSET UNITYSDK_OFFSET(0x1C362AD0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_GETROUGHPROPORTION_OFFSET UNITYSDK_OFFSET(0x1C363410)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEBYUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1C362880)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEMAXUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1C362230)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_ROUGHLERP_OFFSET UNITYSDK_OFFSET(0x1C363B40)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C361C70)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1C361D70)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C361BF0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_UINTTOUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1C361F80)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS_UNITTYPETOUINT_OFFSET UNITYSDK_OFFSET(0x1C361F40)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C363E40)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__FORMATWITHMINEFFECTIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x1C363030)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__GETDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x1C362FB0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__GETINTEGERDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3631C0)
#define RPG_CLIENT_PLANETFESBIGUINTUTILS__GETPOWEROFTEN_OFFSET UNITYSDK_OFFSET(0x1C3639E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBigUintUtils_TypeDefinitionIndex = 66500;

	class PlanetFesBigUintUtils : public ::System::Object
	{
	public:
		static ::System::Numerics::BigInteger* StaticGet__RoughRatio()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x5A100);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesUnitType, ::System::Numerics::BigInteger>** StaticGet__LUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesUnitType, ::System::Numerics::BigInteger>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x5A110);
		}
		static ::System::Int32* StaticGet__ExpMultiplier()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		static ::System::Single* StaticGet__fRoughRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x12464);
		}
		static ::System::UInt32* StaticGet__RoughLerpRatio()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBigUintUtils_TypeDefinitionIndex)->GetStaticField(0x12468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Numerics::BigInteger DeSerialize(::Class_1_075C34D03AFA1215_81* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::Class_1_075C34D03AFA1215_81*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_DESERIALIZE_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger ToBigInteger(::Class_1_075C34D03AFA1215_81* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::Class_1_075C34D03AFA1215_81*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_OFFSET))(a1);
		}

		static ::Class_1_075C34D03AFA1215_81* Serialize(::System::Numerics::BigInteger a1)
		{
			return ((::Class_1_075C34D03AFA1215_81*(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_SERIALIZE_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger ToBigInteger_1(::RPG::GameCore::PlanetFesBigInt* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::RPG::GameCore::PlanetFesBigInt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_TOBIGINTEGER_1_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger CreateFromPlanetFesBigInt(::RPG::GameCore::PlanetFesBigInt* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::RPG::GameCore::PlanetFesBigInt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEFROMPLANETFESBIGINT_OFFSET))(a1);
		}

		static ::System::UInt32 UnitTypeToUint(::RPG::GameCore::PlanetFesUnitType a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::PlanetFesUnitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_UNITTYPETOUINT_OFFSET))(a1);
		}

		static ::RPG::GameCore::PlanetFesUnitType UintToUnitType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesUnitType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_UINTTOUNITTYPE_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger CreateBigIntegerFromPlanetFesBigIntStr(::System::String* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_CREATEBIGINTEGERFROMPLANETFESBIGINTSTR_OFFSET))(a1);
		}

		static ::RPG::GameCore::PlanetFesUnitType GetValueMaxUnitType(::System::Numerics::BigInteger a1)
		{
			return ((::RPG::GameCore::PlanetFesUnitType(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEMAXUNITTYPE_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger GetValueByUnitType(::RPG::GameCore::PlanetFesUnitType a1)
		{
			return ((::System::Numerics::BigInteger(*)(::RPG::GameCore::PlanetFesUnitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_GETVALUEBYUNITTYPE_OFFSET))(a1);
		}

		static ::System::String* Format(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::Int32 _GetDigitCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__GETDIGITCOUNT_OFFSET))(a1);
		}

		static ::System::String* _FormatWithMinEffectiveDigits(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__FORMATWITHMINEFFECTIVEDIGITS_OFFSET))(a1, a2);
		}

		static ::System::Int32 _GetIntegerDigitCount(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__GETINTEGERDIGITCOUNT_OFFSET))(a1);
		}

		static ::System::Single GetRoughProportion(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Single(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_GETROUGHPROPORTION_OFFSET))(a1, a2);
		}

		static ::System::Int32 _GetPowerOfTen(::System::Numerics::BigInteger a1)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS__GETPOWEROFTEN_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger RoughLerp(::System::Numerics::BigInteger a1, ::System::Numerics::BigInteger a2, ::System::Single a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBIGUINTUTILS_ROUGHLERP_OFFSET))(a1, a2, a3);
		}
	};
}
