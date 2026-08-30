#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_12.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ModifyType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_271B4C12B45EBA1F;
class Class_4_2E0A1A668714B3CC;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0C33E5068A8D6CA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197677D0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_0EDB7B19AE95DF63_OFFSET UNITYSDK_OFFSET(0x19768E20)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_19B2D54E39CB86CC_OFFSET UNITYSDK_OFFSET(0x197678D0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_3BBD939CBCFE4B44_OFFSET UNITYSDK_OFFSET(0x197688A0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_4568CC9D3C4004E1_OFFSET UNITYSDK_OFFSET(0x197679B0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_56AAF22972BD1A66_OFFSET UNITYSDK_OFFSET(0x19768AC0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_572EFC4A8D98E97D_1_OFFSET UNITYSDK_OFFSET(0x19767F70)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_572EFC4A8D98E97D_OFFSET UNITYSDK_OFFSET(0x19767EA0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x19767BB0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_2_OFFSET UNITYSDK_OFFSET(0x19767C20)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_3_OFFSET UNITYSDK_OFFSET(0x19768050)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x19767B20)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x197690F0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_9203B7581828A932_OFFSET UNITYSDK_OFFSET(0x19768540)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_96F1F9F333426D86_OFFSET UNITYSDK_OFFSET(0x19768970)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_B7FF77A31DEA210B_OFFSET UNITYSDK_OFFSET(0x19768740)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_BD55D9945EF0CD25_OFFSET UNITYSDK_OFFSET(0x197680C0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x197681F0)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_BF22E2781C3BFE97_OFFSET UNITYSDK_OFFSET(0x19768820)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x19767D60)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_CB3D667CB6DE8BE3_OFFSET UNITYSDK_OFFSET(0x19767A50)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_D4022EB3C384A65F_OFFSET UNITYSDK_OFFSET(0x19769220)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_EA1B02B41F213171_OFFSET UNITYSDK_OFFSET(0x19768130)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x19768260)
#define CLASS_1_0C33E5068A8D6CA4_METHOD_1_FB15D79B36E1BC15_OFFSET UNITYSDK_OFFSET(0x19767C90)
#define CLASS_1_0C33E5068A8D6CA4__CTOR_OFFSET UNITYSDK_OFFSET(0x197676C0)

inline static constexpr unsigned int Class_1_0C33E5068A8D6CA4_TypeDefinitionIndex = 36440;

class Class_1_0C33E5068A8D6CA4 : public ::System::Object
{
public:
	::Class_4_2E0A1A668714B3CC* NMNILJHPGOK; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_271B4C12B45EBA1F*>* IHIGOKFHKAB; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Collections::Generic::List_1<::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType>*>*>* HHBPPLLHAPL; // 0x20
	::System::UInt32 NDDICDIMAJB; // 0x28

	::System::Void _ctor(::Class_4_2E0A1A668714B3CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2E0A1A668714B3CC*))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_19B2D54E39CB86CC(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_19B2D54E39CB86CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB15D79B36E1BC15(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_FB15D79B36E1BC15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E57D3559C10FFA9_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_6E57D3559C10FFA9_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD55D9945EF0CD25(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_BD55D9945EF0CD25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EA1B02B41F213171(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_EA1B02B41F213171_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_1_9203B7581828A932(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1, ::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType>*))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_9203B7581828A932_OFFSET))(this, a1, a2);
	}

	::Class_1_271B4C12B45EBA1F* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_271B4C12B45EBA1F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CB3D667CB6DE8BE3(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_CB3D667CB6DE8BE3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B7FF77A31DEA210B(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_B7FF77A31DEA210B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF22E2781C3BFE97(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_BF22E2781C3BFE97_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_3BBD939CBCFE4B44(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_3BBD939CBCFE4B44_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* Method_1_96F1F9F333426D86(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_96F1F9F333426D86_OFFSET))(this, a1);
	}

	::System::Void Method_1_56AAF22972BD1A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_56AAF22972BD1A66_OFFSET))(this);
	}

	::System::Void Method_1_0EDB7B19AE95DF63(::System::UInt32 a1, ::Enum_3_DB663931210BBC27_12 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_DB663931210BBC27_12, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_0EDB7B19AE95DF63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_4568CC9D3C4004E1(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_4568CC9D3C4004E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D4022EB3C384A65F(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_D4022EB3C384A65F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_572EFC4A8D98E97D(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_572EFC4A8D98E97D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_572EFC4A8D98E97D_1(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C33E5068A8D6CA4_METHOD_1_572EFC4A8D98E97D_1_OFFSET))(this, a1);
	}
};
