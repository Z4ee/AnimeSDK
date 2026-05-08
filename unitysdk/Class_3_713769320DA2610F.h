#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/Enum_3_B9A017F4B0BBC22E.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/MoleMole/Config/WallColliderLayerType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0206DD479BB5C906;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_A7BCFF3A4359DD5D;
class Class_2_EA995402651EF7A9;
class Class_3_3EFC103AA719DE2B;
class Class_3_61A5922E5046F385_2;
class Class_3_8844CCCBE7A3DB48;
class Class_3_8844CCCBE7A3DB48_1;
class Class_3_9AB126D04F40962B;
class Class_3_9ABE486BF3AA06B5;
class Class_3_9F51BE8AAAB7AB63;
class Class_3_BA5C02ED8EAD6D91_18;
class Class_3_CD07D1B229C77250;
class Class_3_D2FE87D82248D1A4;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F41D242A20F8FE06;
class Class_3_F9ECADD1B18A4FCE;
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_713769320DA2610F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF9EE360)
#define CLASS_3_713769320DA2610F_METHOD_3_00B8CA3E1B851B2B_OFFSET UNITYSDK_OFFSET(0xF9F7B40)
#define CLASS_3_713769320DA2610F_METHOD_3_0CF572BA8E455C86_OFFSET UNITYSDK_OFFSET(0xF9F5630)
#define CLASS_3_713769320DA2610F_METHOD_3_14EB16067E828C4D_OFFSET UNITYSDK_OFFSET(0xF9F19B0)
#define CLASS_3_713769320DA2610F_METHOD_3_1773C1E087406A6D_OFFSET UNITYSDK_OFFSET(0xF9F2630)
#define CLASS_3_713769320DA2610F_METHOD_3_19A781EBF8B7996E_OFFSET UNITYSDK_OFFSET(0xF9F4990)
#define CLASS_3_713769320DA2610F_METHOD_3_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0xF9F2E10)
#define CLASS_3_713769320DA2610F_METHOD_3_224CB92A272C5D63_OFFSET UNITYSDK_OFFSET(0xF9F5DB0)
#define CLASS_3_713769320DA2610F_METHOD_3_2314ADE6A117A696_OFFSET UNITYSDK_OFFSET(0xF9F59D0)
#define CLASS_3_713769320DA2610F_METHOD_3_26324404D9A1E71D_OFFSET UNITYSDK_OFFSET(0xF9FA610)
#define CLASS_3_713769320DA2610F_METHOD_3_2873D1DB89AEC8C3_OFFSET UNITYSDK_OFFSET(0xF9EFA10)
#define CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_1_OFFSET UNITYSDK_OFFSET(0xF9F1780)
#define CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_OFFSET UNITYSDK_OFFSET(0xF9EE4C0)
#define CLASS_3_713769320DA2610F_METHOD_3_337B4FC61A9261F3_OFFSET UNITYSDK_OFFSET(0xF9F6B90)
#define CLASS_3_713769320DA2610F_METHOD_3_36EC345D7699F674_OFFSET UNITYSDK_OFFSET(0xF9EF4C0)
#define CLASS_3_713769320DA2610F_METHOD_3_3ADC8AADD45C8F3F_OFFSET UNITYSDK_OFFSET(0xF9F6DB0)
#define CLASS_3_713769320DA2610F_METHOD_3_51ED963215713DAC_OFFSET UNITYSDK_OFFSET(0xF9F6210)
#define CLASS_3_713769320DA2610F_METHOD_3_60903B7026F8E8A0_OFFSET UNITYSDK_OFFSET(0xF9F5BE0)
#define CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_1_OFFSET UNITYSDK_OFFSET(0xF9F9920)
#define CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_OFFSET UNITYSDK_OFFSET(0xF9F0950)
#define CLASS_3_713769320DA2610F_METHOD_3_67CA37D227C99E8D_OFFSET UNITYSDK_OFFSET(0xF9FA330)
#define CLASS_3_713769320DA2610F_METHOD_3_707AEC97B3DD0B0B_OFFSET UNITYSDK_OFFSET(0xF9EFE70)
#define CLASS_3_713769320DA2610F_METHOD_3_717A6E6AFC23D21A_OFFSET UNITYSDK_OFFSET(0xF9F6920)
#define CLASS_3_713769320DA2610F_METHOD_3_73D9F2C39DFDA646_OFFSET UNITYSDK_OFFSET(0xF9F4430)
#define CLASS_3_713769320DA2610F_METHOD_3_7615087273018C86_OFFSET UNITYSDK_OFFSET(0xF9F50E0)
#define CLASS_3_713769320DA2610F_METHOD_3_7935E0097BE85CD4_OFFSET UNITYSDK_OFFSET(0xF9EE6F0)
#define CLASS_3_713769320DA2610F_METHOD_3_7BD1B56F7314884B_OFFSET UNITYSDK_OFFSET(0xF9F1C70)
#define CLASS_3_713769320DA2610F_METHOD_3_7D2401E74DBB0DE4_OFFSET UNITYSDK_OFFSET(0xF9FA730)
#define CLASS_3_713769320DA2610F_METHOD_3_8658B9A00A2092D2_OFFSET UNITYSDK_OFFSET(0xF9F6050)
#define CLASS_3_713769320DA2610F_METHOD_3_878D78205E86BA36_OFFSET UNITYSDK_OFFSET(0xF9EEC20)
#define CLASS_3_713769320DA2610F_METHOD_3_8D55B604496E319D_OFFSET UNITYSDK_OFFSET(0xF9F8050)
#define CLASS_3_713769320DA2610F_METHOD_3_8FEB8C399657B0C9_OFFSET UNITYSDK_OFFSET(0xF9F3730)
#define CLASS_3_713769320DA2610F_METHOD_3_9753EC6426DBA440_OFFSET UNITYSDK_OFFSET(0xF9F0E00)
#define CLASS_3_713769320DA2610F_METHOD_3_A6E89437E8950B20_OFFSET UNITYSDK_OFFSET(0xF9F86C0)
#define CLASS_3_713769320DA2610F_METHOD_3_AAB66547AA834CA3_OFFSET UNITYSDK_OFFSET(0xF9F3EE0)
#define CLASS_3_713769320DA2610F_METHOD_3_AACD2DCD19E68667_OFFSET UNITYSDK_OFFSET(0xF9F57F0)
#define CLASS_3_713769320DA2610F_METHOD_3_B18414A26F838227_OFFSET UNITYSDK_OFFSET(0xF9F7490)
#define CLASS_3_713769320DA2610F_METHOD_3_B31A23B75E1D102F_OFFSET UNITYSDK_OFFSET(0xF9F2C20)
#define CLASS_3_713769320DA2610F_METHOD_3_B523979ADEC649A0_OFFSET UNITYSDK_OFFSET(0xF9F39E0)
#define CLASS_3_713769320DA2610F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xF9FA580)
#define CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_1_OFFSET UNITYSDK_OFFSET(0xF9EEF20)
#define CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0xF9F1150)
#define CLASS_3_713769320DA2610F_METHOD_3_CAC411D47D9A87C3_OFFSET UNITYSDK_OFFSET(0xF9F82F0)
#define CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_1_OFFSET UNITYSDK_OFFSET(0xF9F5EE0)
#define CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_OFFSET UNITYSDK_OFFSET(0xF9F4820)
#define CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_1_OFFSET UNITYSDK_OFFSET(0xF9F2CD0)
#define CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_OFFSET UNITYSDK_OFFSET(0xF9F42F0)
#define CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_1_OFFSET UNITYSDK_OFFSET(0xF9F67C0)
#define CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_OFFSET UNITYSDK_OFFSET(0xF9EFD10)
#define CLASS_3_713769320DA2610F_METHOD_3_F31C83CDB40FA059_OFFSET UNITYSDK_OFFSET(0xF9F9DD0)
#define CLASS_3_713769320DA2610F_METHOD_3_F6DEBCF685B10408_OFFSET UNITYSDK_OFFSET(0xF9F9210)
#define CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_1_OFFSET UNITYSDK_OFFSET(0xF9F8DE0)
#define CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_OFFSET UNITYSDK_OFFSET(0xF9F6F50)
#define CLASS_3_713769320DA2610F__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EE470)

inline static constexpr unsigned int Class_3_713769320DA2610F_TypeDefinitionIndex = 50448;

class Class_3_713769320DA2610F : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2B3B0834282D786F(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_878D78205E86BA36(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Boolean a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_878D78205E86BA36_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_36EC345D7699F674(::Class_3_9F51BE8AAAB7AB63* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_9F51BE8AAAB7AB63*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_36EC345D7699F674_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E067E05CBCDA47D0(::Class_3_F41D242A20F8FE06* a1, ::Class_3_CD07D1B229C77250* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_CD07D1B229C77250*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_651EAF4DD00167FC(::Class_3_8844CCCBE7A3DB48_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_8844CCCBE7A3DB48_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14EB16067E828C4D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_14EB16067E828C4D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7935E0097BE85CD4(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7935E0097BE85CD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1773C1E087406A6D(::MoleMole::MonoEntityColliderManager* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::MonoEntityColliderManager*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_1773C1E087406A6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BFF96E989AC38879(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_OFFSET))(a1);
	}

	static ::System::Void Method_3_2873D1DB89AEC8C3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::MoleMole::Config::ColliderLayerType a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*&, ::MoleMole::Config::ColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2873D1DB89AEC8C3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_8FEB8C399657B0C9(::Class_3_61A5922E5046F385_2* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::UnityEngine::GameObject* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_2*, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::GameObject*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_8FEB8C399657B0C9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_AAB66547AA834CA3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_AAB66547AA834CA3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_BFF96E989AC38879_1(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_CE73B4113A438349(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::Class_2_0206DD479BB5C906*& a4, ::Class_2_A7BCFF3A4359DD5D*& a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::Class_2_0206DD479BB5C906*&, ::Class_2_A7BCFF3A4359DD5D*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_7BD1B56F7314884B(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7BD1B56F7314884B_OFFSET))(a1);
	}

	static ::System::Void Method_3_73D9F2C39DFDA646(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_73D9F2C39DFDA646_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CD4A9D3514F7D1C0(::Class_3_F41D242A20F8FE06* a1, ::Class_3_D2FE87D82248D1A4* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_D2FE87D82248D1A4*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_7615087273018C86(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_B9A017F4B0BBC22E a2, ::Class_2_7C9A70DC3FC57CDC* a3, ::Enum_3_4F1F8ABDC2B55312 a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_B9A017F4B0BBC22E, ::Class_2_7C9A70DC3FC57CDC*, ::Enum_3_4F1F8ABDC2B55312))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7615087273018C86_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_0CF572BA8E455C86(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_0CF572BA8E455C86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_707AEC97B3DD0B0B(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4, ::Enum_3_B9A017F4B0BBC22E a5, ::Class_2_7C9A70DC3FC57CDC* a6)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::Enum_3_B9A017F4B0BBC22E, ::Class_2_7C9A70DC3FC57CDC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_707AEC97B3DD0B0B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_224CB92A272C5D63(::Class_3_BA5C02ED8EAD6D91_18* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_BA5C02ED8EAD6D91_18*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_224CB92A272C5D63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CD4A9D3514F7D1C0_1(::Class_3_F41D242A20F8FE06* a1, ::Class_3_3EFC103AA719DE2B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_3EFC103AA719DE2B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_8658B9A00A2092D2(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_8658B9A00A2092D2_OFFSET))(a1);
	}

	static ::System::Void Method_3_E067E05CBCDA47D0_1(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F9ECADD1B18A4FCE* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_F9ECADD1B18A4FCE*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_CE73B4113A438349_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::Class_2_0206DD479BB5C906*& a4, ::Class_2_A7BCFF3A4359DD5D*& a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::Class_2_0206DD479BB5C906*&, ::Class_2_A7BCFF3A4359DD5D*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_19A781EBF8B7996E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_B9A017F4B0BBC22E a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::Class_2_7C9A70DC3FC57CDC* a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_B9A017F4B0BBC22E, ::Enum_3_4F1F8ABDC2B55312, ::Class_2_7C9A70DC3FC57CDC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_19A781EBF8B7996E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_3_3ADC8AADD45C8F3F(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::System::Boolean a4, ::MoleMole::Config::WallColliderLayerType a5)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::MoleMole::Config::WallColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_3ADC8AADD45C8F3F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_51ED963215713DAC(::MoleMole::MonoEntityColliderManager* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::MonoEntityColliderManager*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_51ED963215713DAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B18414A26F838227(::Class_3_9ABE486BF3AA06B5* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_9ABE486BF3AA06B5*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_B18414A26F838227_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9753EC6426DBA440(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_B9A017F4B0BBC22E a2, ::Enum_3_4F1F8ABDC2B55312 a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_B9A017F4B0BBC22E, ::Enum_3_4F1F8ABDC2B55312))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_9753EC6426DBA440_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F71EEF7B82F2FEDD(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_00B8CA3E1B851B2B(::Class_3_9AB126D04F40962B* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_9AB126D04F40962B*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_00B8CA3E1B851B2B_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_B31A23B75E1D102F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_B31A23B75E1D102F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CAC411D47D9A87C3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CAC411D47D9A87C3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_A6E89437E8950B20(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::MoleMole::MonoEntityColliderManager* a3)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::MoleMole::MonoEntityColliderManager*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_A6E89437E8950B20_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B523979ADEC649A0(::Class_3_61A5922E5046F385_2* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_2*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_B523979ADEC649A0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F71EEF7B82F2FEDD_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_60903B7026F8E8A0(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_60903B7026F8E8A0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_717A6E6AFC23D21A(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_717A6E6AFC23D21A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_651EAF4DD00167FC_1(::Class_3_8844CCCBE7A3DB48* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_8844CCCBE7A3DB48*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F31C83CDB40FA059(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F31C83CDB40FA059_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_2B3B0834282D786F_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_67CA37D227C99E8D(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_67CA37D227C99E8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8D55B604496E319D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::MoleMole::Config::WallColliderLayerType a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&, ::MoleMole::Config::WallColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_8D55B604496E319D_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_337B4FC61A9261F3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_337B4FC61A9261F3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_3_AACD2DCD19E68667(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_AACD2DCD19E68667_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_F6DEBCF685B10408(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F6DEBCF685B10408_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_2314ADE6A117A696(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Boolean a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5, ::MoleMole::Config::ColliderLayerType a6)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Boolean, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::MoleMole::Config::ColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2314ADE6A117A696_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_1B8139AE71A3FDE1(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_1B8139AE71A3FDE1_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_26324404D9A1E71D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_26324404D9A1E71D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7D2401E74DBB0DE4(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_B9A017F4B0BBC22E a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_B9A017F4B0BBC22E))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7D2401E74DBB0DE4_OFFSET))(a1, a2);
	}
};
