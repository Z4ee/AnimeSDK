#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_93A7657886F5B09F;
class Class_1_B0F3210ABBBBF098;
class Class_1_B3CB0277F28E93FA;
class Class_1_C85C4DAB350DD5FC_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_776B0504B8892BA3_METHOD_1_0B65CF18670C7943_OFFSET UNITYSDK_OFFSET(0x1A7E05A0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_21863455D489CDDB_OFFSET UNITYSDK_OFFSET(0x1A7DEAB0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_633B14F19DB86E4A_1_OFFSET UNITYSDK_OFFSET(0x1A7E08F0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_633B14F19DB86E4A_OFFSET UNITYSDK_OFFSET(0x1A7E0760)
#define CLASS_1_776B0504B8892BA3_METHOD_1_66B2C6F32C2E70C8_OFFSET UNITYSDK_OFFSET(0x1A7DF750)
#define CLASS_1_776B0504B8892BA3_METHOD_1_71DCA76EBC9A1D30_OFFSET UNITYSDK_OFFSET(0x1A7DF0C0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_78A69BBDCB1FA27A_OFFSET UNITYSDK_OFFSET(0x1A7DF6A0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1A7DFEE0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0x1A7DECA0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_B59FFCA9FAAA47A5_OFFSET UNITYSDK_OFFSET(0x1A7DFC10)
#define CLASS_1_776B0504B8892BA3_METHOD_1_CAD3D1FAA9ED5F2B_OFFSET UNITYSDK_OFFSET(0x1A7DF5D0)
#define CLASS_1_776B0504B8892BA3_METHOD_1_D39CEBD386A8F819_OFFSET UNITYSDK_OFFSET(0x1A7DF840)
#define CLASS_1_776B0504B8892BA3_METHOD_1_EB95BC12C4E82AD9_OFFSET UNITYSDK_OFFSET(0x1A7DFA60)
#define CLASS_1_776B0504B8892BA3_METHOD_1_F42D53D8255C8B07_1_OFFSET UNITYSDK_OFFSET(0x1A7E0160)
#define CLASS_1_776B0504B8892BA3_METHOD_1_F42D53D8255C8B07_2_OFFSET UNITYSDK_OFFSET(0x1A7E0380)
#define CLASS_1_776B0504B8892BA3_METHOD_1_F42D53D8255C8B07_OFFSET UNITYSDK_OFFSET(0x1A7DFF40)
#define CLASS_1_776B0504B8892BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E0A90)

inline static constexpr unsigned int Class_1_776B0504B8892BA3_TypeDefinitionIndex = 79768;

class Class_1_776B0504B8892BA3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B3CB0277F28E93FA*>* GEJHKIHNFPI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC_2*>* IHNOEAMNIBK; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinHouguRarityType, ::Class_1_93A7657886F5B09F*>* MFGCHEPAFPM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B0F3210ABBBBF098*>* FKANOBEBMPE; // 0x28
	::System::Boolean DOFJLCMOJML; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_21863455D489CDDB(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_21863455D489CDDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_71DCA76EBC9A1D30(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_71DCA76EBC9A1D30_OFFSET))(this, a1);
	}

	::Class_1_C85C4DAB350DD5FC_2* Method_1_CAD3D1FAA9ED5F2B(::System::UInt32 a1)
	{
		return ((::Class_1_C85C4DAB350DD5FC_2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_CAD3D1FAA9ED5F2B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_78A69BBDCB1FA27A(::System::UInt32 a1, ::Class_1_C85C4DAB350DD5FC_2*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_C85C4DAB350DD5FC_2*&))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_78A69BBDCB1FA27A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* Method_1_66B2C6F32C2E70C8()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_66B2C6F32C2E70C8_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* Method_1_D39CEBD386A8F819()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_D39CEBD386A8F819_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* Method_1_EB95BC12C4E82AD9(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_EB95BC12C4E82AD9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_B59FFCA9FAAA47A5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_B59FFCA9FAAA47A5_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_F42D53D8255C8B07()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_F42D53D8255C8B07_OFFSET))(this);
	}

	::System::Int32 Method_1_F42D53D8255C8B07_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_F42D53D8255C8B07_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F42D53D8255C8B07_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_F42D53D8255C8B07_2_OFFSET))(this);
	}

	::System::Void Method_1_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_97AC5E0734B0603A_OFFSET))(this);
	}

	::Class_1_93A7657886F5B09F* Method_1_0B65CF18670C7943(::RPG::GameCore::FateRinHouguRarityType a1)
	{
		return ((::Class_1_93A7657886F5B09F*(*)(::PVOID, ::RPG::GameCore::FateRinHouguRarityType))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_0B65CF18670C7943_OFFSET))(this, a1);
	}

	::Class_1_B0F3210ABBBBF098* Method_1_633B14F19DB86E4A(::System::UInt32 a1)
	{
		return ((::Class_1_B0F3210ABBBBF098*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_633B14F19DB86E4A_OFFSET))(this, a1);
	}

	::Class_1_B3CB0277F28E93FA* Method_1_633B14F19DB86E4A_1(::System::UInt32 a1)
	{
		return ((::Class_1_B3CB0277F28E93FA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_776B0504B8892BA3_METHOD_1_633B14F19DB86E4A_1_OFFSET))(this, a1);
	}
};
