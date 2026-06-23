#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/Enum_3_DEC90C97E871B705.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/MoleMole/Config/WallColliderLayerType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0206DD479BB5C906;
class Class_2_167BB37617B940E3;
class Class_2_828B2711AF58BA0B;
class Class_2_D1970C03380B1430;
class Class_2_EA995402651EF7A9;
class Class_3_3EFC103AA719DE2B;
class Class_3_61A5922E5046F385;
class Class_3_8844CCCBE7A3DB48;
class Class_3_8844CCCBE7A3DB48_1;
class Class_3_9AB126D04F40962B;
class Class_3_9ABE486BF3AA06B5;
class Class_3_9F51BE8AAAB7AB63;
class Class_3_BA5C02ED8EAD6D91_24;
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

#define CLASS_3_713769320DA2610F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14CD3170)
#define CLASS_3_713769320DA2610F_METHOD_3_00B8CA3E1B851B2B_OFFSET UNITYSDK_OFFSET(0x14CDD5D0)
#define CLASS_3_713769320DA2610F_METHOD_3_0CF572BA8E455C86_OFFSET UNITYSDK_OFFSET(0x14CDB9D0)
#define CLASS_3_713769320DA2610F_METHOD_3_14EB16067E828C4D_OFFSET UNITYSDK_OFFSET(0x14CDDEB0)
#define CLASS_3_713769320DA2610F_METHOD_3_1773C1E087406A6D_OFFSET UNITYSDK_OFFSET(0x14CD44F0)
#define CLASS_3_713769320DA2610F_METHOD_3_19A781EBF8B7996E_OFFSET UNITYSDK_OFFSET(0x14CDC050)
#define CLASS_3_713769320DA2610F_METHOD_3_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x14CD7FF0)
#define CLASS_3_713769320DA2610F_METHOD_3_224CB92A272C5D63_OFFSET UNITYSDK_OFFSET(0x14CE02E0)
#define CLASS_3_713769320DA2610F_METHOD_3_2314ADE6A117A696_OFFSET UNITYSDK_OFFSET(0x14CD6960)
#define CLASS_3_713769320DA2610F_METHOD_3_26324404D9A1E71D_OFFSET UNITYSDK_OFFSET(0x14CD8900)
#define CLASS_3_713769320DA2610F_METHOD_3_2873D1DB89AEC8C3_OFFSET UNITYSDK_OFFSET(0x14CDCC80)
#define CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_1_OFFSET UNITYSDK_OFFSET(0x14CDC7A0)
#define CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_OFFSET UNITYSDK_OFFSET(0x14CD4100)
#define CLASS_3_713769320DA2610F_METHOD_3_337B4FC61A9261F3_OFFSET UNITYSDK_OFFSET(0x14CDC9D0)
#define CLASS_3_713769320DA2610F_METHOD_3_36EC345D7699F674_OFFSET UNITYSDK_OFFSET(0x14CDE350)
#define CLASS_3_713769320DA2610F_METHOD_3_3ADC8AADD45C8F3F_OFFSET UNITYSDK_OFFSET(0x14CD61E0)
#define CLASS_3_713769320DA2610F_METHOD_3_51ED963215713DAC_OFFSET UNITYSDK_OFFSET(0x14CD4AE0)
#define CLASS_3_713769320DA2610F_METHOD_3_60903B7026F8E8A0_OFFSET UNITYSDK_OFFSET(0x14CDA570)
#define CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_1_OFFSET UNITYSDK_OFFSET(0x14CD93F0)
#define CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_OFFSET UNITYSDK_OFFSET(0x14CD32D0)
#define CLASS_3_713769320DA2610F_METHOD_3_67CA37D227C99E8D_OFFSET UNITYSDK_OFFSET(0x14CDBB90)
#define CLASS_3_713769320DA2610F_METHOD_3_707AEC97B3DD0B0B_OFFSET UNITYSDK_OFFSET(0x14CD7510)
#define CLASS_3_713769320DA2610F_METHOD_3_717A6E6AFC23D21A_OFFSET UNITYSDK_OFFSET(0x14CDBDE0)
#define CLASS_3_713769320DA2610F_METHOD_3_73D9F2C39DFDA646_OFFSET UNITYSDK_OFFSET(0x14CDE8A0)
#define CLASS_3_713769320DA2610F_METHOD_3_7615087273018C86_OFFSET UNITYSDK_OFFSET(0x14CD5090)
#define CLASS_3_713769320DA2610F_METHOD_3_7935E0097BE85CD4_OFFSET UNITYSDK_OFFSET(0x14CDB4B0)
#define CLASS_3_713769320DA2610F_METHOD_3_7BD1B56F7314884B_OFFSET UNITYSDK_OFFSET(0x14CD9BA0)
#define CLASS_3_713769320DA2610F_METHOD_3_7D2401E74DBB0DE4_OFFSET UNITYSDK_OFFSET(0x14CDF1E0)
#define CLASS_3_713769320DA2610F_METHOD_3_8658B9A00A2092D2_OFFSET UNITYSDK_OFFSET(0x14CD4330)
#define CLASS_3_713769320DA2610F_METHOD_3_878D78205E86BA36_OFFSET UNITYSDK_OFFSET(0x14CD98A0)
#define CLASS_3_713769320DA2610F_METHOD_3_8D55B604496E319D_OFFSET UNITYSDK_OFFSET(0x14CDB210)
#define CLASS_3_713769320DA2610F_METHOD_3_8FEB8C399657B0C9_OFFSET UNITYSDK_OFFSET(0x14CD9140)
#define CLASS_3_713769320DA2610F_METHOD_3_9753EC6426DBA440_OFFSET UNITYSDK_OFFSET(0x14CD3780)
#define CLASS_3_713769320DA2610F_METHOD_3_A6E89437E8950B20_OFFSET UNITYSDK_OFFSET(0x14CD8A20)
#define CLASS_3_713769320DA2610F_METHOD_3_AAB66547AA834CA3_OFFSET UNITYSDK_OFFSET(0x14CDAE00)
#define CLASS_3_713769320DA2610F_METHOD_3_AACD2DCD19E68667_OFFSET UNITYSDK_OFFSET(0x14CDE170)
#define CLASS_3_713769320DA2610F_METHOD_3_B18414A26F838227_OFFSET UNITYSDK_OFFSET(0x14CD5B40)
#define CLASS_3_713769320DA2610F_METHOD_3_B31A23B75E1D102F_OFFSET UNITYSDK_OFFSET(0x14CD68B0)
#define CLASS_3_713769320DA2610F_METHOD_3_B523979ADEC649A0_OFFSET UNITYSDK_OFFSET(0x14CDD0D0)
#define CLASS_3_713769320DA2610F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14CDCBF0)
#define CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_1_OFFSET UNITYSDK_OFFSET(0x14CD3AD0)
#define CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0x14CD55C0)
#define CLASS_3_713769320DA2610F_METHOD_3_CAC411D47D9A87C3_OFFSET UNITYSDK_OFFSET(0x14CDDAE0)
#define CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_1_OFFSET UNITYSDK_OFFSET(0x14CE0170)
#define CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_OFFSET UNITYSDK_OFFSET(0x14CDAC90)
#define CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_1_OFFSET UNITYSDK_OFFSET(0x14CDAB50)
#define CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_OFFSET UNITYSDK_OFFSET(0x14CD6B70)
#define CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_1_OFFSET UNITYSDK_OFFSET(0x14CDCF70)
#define CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_OFFSET UNITYSDK_OFFSET(0x14CD73B0)
#define CLASS_3_713769320DA2610F_METHOD_3_F31C83CDB40FA059_OFFSET UNITYSDK_OFFSET(0x14CDEC80)
#define CLASS_3_713769320DA2610F_METHOD_3_F6DEBCF685B10408_OFFSET UNITYSDK_OFFSET(0x14CD6CB0)
#define CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_1_OFFSET UNITYSDK_OFFSET(0x14CDA740)
#define CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_OFFSET UNITYSDK_OFFSET(0x14CD6380)
#define CLASS_3_713769320DA2610F__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD3280)

inline static constexpr unsigned int Class_3_713769320DA2610F_TypeDefinitionIndex = 79840;

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

	static ::System::Void Method_3_651EAF4DD00167FC(::Class_3_8844CCCBE7A3DB48* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_8844CCCBE7A3DB48*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8658B9A00A2092D2(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_8658B9A00A2092D2_OFFSET))(a1);
	}

	static ::System::Void Method_3_7615087273018C86(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_DEC90C97E871B705 a2, ::Class_2_828B2711AF58BA0B* a3, ::Enum_3_4F1F8ABDC2B55312 a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_DEC90C97E871B705, ::Class_2_828B2711AF58BA0B*, ::Enum_3_4F1F8ABDC2B55312))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7615087273018C86_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_B18414A26F838227(::Class_3_9ABE486BF3AA06B5* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_9ABE486BF3AA06B5*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_B18414A26F838227_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F71EEF7B82F2FEDD(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_2314ADE6A117A696(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Boolean a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5, ::MoleMole::Config::ColliderLayerType a6)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Boolean, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::MoleMole::Config::ColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2314ADE6A117A696_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_E067E05CBCDA47D0(::Class_3_F41D242A20F8FE06* a1, ::Class_3_CD07D1B229C77250* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_CD07D1B229C77250*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_3_B31A23B75E1D102F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_B31A23B75E1D102F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1B8139AE71A3FDE1(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_1B8139AE71A3FDE1_OFFSET))(a1);
	}

	static ::System::Void Method_3_651EAF4DD00167FC_1(::Class_3_8844CCCBE7A3DB48_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_8844CCCBE7A3DB48_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_651EAF4DD00167FC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_878D78205E86BA36(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Boolean a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_878D78205E86BA36_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7BD1B56F7314884B(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7BD1B56F7314884B_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_60903B7026F8E8A0(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_60903B7026F8E8A0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_3_3ADC8AADD45C8F3F(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::System::Boolean a4, ::MoleMole::Config::WallColliderLayerType a5)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::MoleMole::Config::WallColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_3ADC8AADD45C8F3F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_F6DEBCF685B10408(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F6DEBCF685B10408_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CD4A9D3514F7D1C0(::Class_3_F41D242A20F8FE06* a1, ::Class_3_3EFC103AA719DE2B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_3EFC103AA719DE2B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_AAB66547AA834CA3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_AAB66547AA834CA3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8D55B604496E319D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::MoleMole::Config::WallColliderLayerType a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&, ::MoleMole::Config::WallColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_8D55B604496E319D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_2B3B0834282D786F(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_7935E0097BE85CD4(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7935E0097BE85CD4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0CF572BA8E455C86(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_0CF572BA8E455C86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_67CA37D227C99E8D(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_67CA37D227C99E8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_717A6E6AFC23D21A(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_717A6E6AFC23D21A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_19A781EBF8B7996E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_DEC90C97E871B705 a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::Class_2_828B2711AF58BA0B* a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_DEC90C97E871B705, ::Enum_3_4F1F8ABDC2B55312, ::Class_2_828B2711AF58BA0B*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_19A781EBF8B7996E_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2873D1DB89AEC8C3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::MoleMole::Config::ColliderLayerType a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*&, ::MoleMole::Config::ColliderLayerType))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2873D1DB89AEC8C3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_CE73B4113A438349(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::Class_2_0206DD479BB5C906*& a4, ::Class_2_D1970C03380B1430*& a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::Class_2_0206DD479BB5C906*&, ::Class_2_D1970C03380B1430*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E067E05CBCDA47D0_1(::Class_3_F41D242A20F8FE06* a1, ::Class_3_F9ECADD1B18A4FCE* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_F9ECADD1B18A4FCE*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_E067E05CBCDA47D0_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_B523979ADEC649A0(::Class_3_61A5922E5046F385* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_B523979ADEC649A0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_00B8CA3E1B851B2B(::Class_3_9AB126D04F40962B* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_9AB126D04F40962B*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_00B8CA3E1B851B2B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8FEB8C399657B0C9(::Class_3_61A5922E5046F385* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::UnityEngine::GameObject* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::GameObject*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_8FEB8C399657B0C9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_BFF96E989AC38879(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_OFFSET))(a1);
	}

	static ::System::Void Method_3_CAC411D47D9A87C3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CAC411D47D9A87C3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_BFF96E989AC38879_1(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_BFF96E989AC38879_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_2B3B0834282D786F_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::Enum_3_4F1F8ABDC2B55312 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_2B3B0834282D786F_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_A6E89437E8950B20(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::MoleMole::MonoEntityColliderManager* a3)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::MoleMole::MonoEntityColliderManager*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_A6E89437E8950B20_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_337B4FC61A9261F3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_337B4FC61A9261F3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_707AEC97B3DD0B0B(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4, ::Enum_3_DEC90C97E871B705 a5, ::Class_2_828B2711AF58BA0B* a6)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::Enum_3_DEC90C97E871B705, ::Class_2_828B2711AF58BA0B*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_707AEC97B3DD0B0B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_9753EC6426DBA440(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_DEC90C97E871B705 a2, ::Enum_3_4F1F8ABDC2B55312 a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_DEC90C97E871B705, ::Enum_3_4F1F8ABDC2B55312))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_9753EC6426DBA440_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_36EC345D7699F674(::Class_3_9F51BE8AAAB7AB63* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_9F51BE8AAAB7AB63*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_36EC345D7699F674_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CE73B4113A438349_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::Enum_3_4F1F8ABDC2B55312 a3, ::Class_2_0206DD479BB5C906*& a4, ::Class_2_D1970C03380B1430*& a5)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::Enum_3_4F1F8ABDC2B55312, ::Class_2_0206DD479BB5C906*&, ::Class_2_D1970C03380B1430*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CE73B4113A438349_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_14EB16067E828C4D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_14EB16067E828C4D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_F71EEF7B82F2FEDD_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F71EEF7B82F2FEDD_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73D9F2C39DFDA646(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_73D9F2C39DFDA646_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F31C83CDB40FA059(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_4F1F8ABDC2B55312 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_F31C83CDB40FA059_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_26324404D9A1E71D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_26324404D9A1E71D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_3_AACD2DCD19E68667(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_AACD2DCD19E68667_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_7D2401E74DBB0DE4(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Enum_3_DEC90C97E871B705 a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Enum_3_DEC90C97E871B705))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_7D2401E74DBB0DE4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CD4A9D3514F7D1C0_1(::Class_3_F41D242A20F8FE06* a1, ::Class_3_D2FE87D82248D1A4* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::Class_3_D2FE87D82248D1A4*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_CD4A9D3514F7D1C0_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_224CB92A272C5D63(::Class_3_BA5C02ED8EAD6D91_24* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_BA5C02ED8EAD6D91_24*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_224CB92A272C5D63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1773C1E087406A6D(::MoleMole::MonoEntityColliderManager* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::MonoEntityColliderManager*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_1773C1E087406A6D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_51ED963215713DAC(::MoleMole::MonoEntityColliderManager* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::MonoEntityColliderManager*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_713769320DA2610F_METHOD_3_51ED963215713DAC_OFFSET))(a1, a2);
	}
};
