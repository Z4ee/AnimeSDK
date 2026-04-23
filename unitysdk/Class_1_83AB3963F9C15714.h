#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

#define CLASS_1_83AB3963F9C15714_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA57220)
#define CLASS_1_83AB3963F9C15714_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA57130)
#define CLASS_1_83AB3963F9C15714_METHOD_1_03283D79AA863425_OFFSET UNITYSDK_OFFSET(0xAA56F30)
#define CLASS_1_83AB3963F9C15714_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAA57800)
#define CLASS_1_83AB3963F9C15714_METHOD_1_1DF89B53B029DC2B_OFFSET UNITYSDK_OFFSET(0xAA56A20)
#define CLASS_1_83AB3963F9C15714_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xAA56F90)
#define CLASS_1_83AB3963F9C15714_METHOD_1_455046DD3682388F_OFFSET UNITYSDK_OFFSET(0xAA57340)
#define CLASS_1_83AB3963F9C15714_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xAA57DC0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_52CF8D99525A9417_OFFSET UNITYSDK_OFFSET(0xAA579F0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_66F8FE6C5E97D9CE_OFFSET UNITYSDK_OFFSET(0xAA57560)
#define CLASS_1_83AB3963F9C15714_METHOD_1_75EB2D0341D0BD0F_OFFSET UNITYSDK_OFFSET(0xAA57860)
#define CLASS_1_83AB3963F9C15714_METHOD_1_7F49939C8676162E_OFFSET UNITYSDK_OFFSET(0xD33BBE0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_7FB738A84DBA302A_OFFSET UNITYSDK_OFFSET(0xAA575D0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0xAA58520)
#define CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_2_OFFSET UNITYSDK_OFFSET(0xD33BBB0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_3_OFFSET UNITYSDK_OFFSET(0xD33BBC0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0xAA58510)
#define CLASS_1_83AB3963F9C15714_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xAA57C40)
#define CLASS_1_83AB3963F9C15714_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAA57BD0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_AAB64D3DC602450F_OFFSET UNITYSDK_OFFSET(0xAA56CF0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_B40758801439DAEA_OFFSET UNITYSDK_OFFSET(0xAA56DD0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_B7D1F41A355D015B_OFFSET UNITYSDK_OFFSET(0xAA56E50)
#define CLASS_1_83AB3963F9C15714_METHOD_1_BADDA70ED68283AE_1_OFFSET UNITYSDK_OFFSET(0xAA58400)
#define CLASS_1_83AB3963F9C15714_METHOD_1_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xAA582F0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0xAA57CB0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xAA58020)
#define CLASS_1_83AB3963F9C15714_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xAA57400)
#define CLASS_1_83AB3963F9C15714_METHOD_1_EE4CFEF68A645229_OFFSET UNITYSDK_OFFSET(0xAA56B10)
#define CLASS_1_83AB3963F9C15714_METHOD_1_F6BA81794F7DAF2B_OFFSET UNITYSDK_OFFSET(0xD33BBD0)
#define CLASS_1_83AB3963F9C15714_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0xAA57270)
#define CLASS_1_83AB3963F9C15714__CCTOR_OFFSET UNITYSDK_OFFSET(0xD33BD20)
#define CLASS_1_83AB3963F9C15714__CTOR_OFFSET UNITYSDK_OFFSET(0xD33BBF0)

inline static constexpr unsigned int Class_1_83AB3963F9C15714_TypeDefinitionIndex = 51928;

class Class_1_83AB3963F9C15714 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83AB3963F9C15714_TypeDefinitionIndex)->GetStaticField(0x10770);
	}
	::UnityEngine::Buffers::ArrayPool_1<::System::Boolean>* Field_1_4; // 0x10
	::RPG::GameCore::PropertyAdsorptionConfig* Field_1_14; // 0x18
	::UnityEngine::Buffers::ArrayPool_1<::RPG::GameCore::FixPoint>* Field_1_2; // 0x20
	::Il2CppArray<::System::Boolean>* Field_1_7; // 0x28
	::UnityEngine::Buffers::ArrayPool_1<::System::Int32>* Field_1_3; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_6; // 0x38
	::Il2CppArray<::System::Int32>* Field_1_8; // 0x40
	::RPG::GameCore::FixPoint Field_1_1; // 0x48
	::RPG::GameCore::FixPoint Field_1_12; // 0x50
	::RPG::GameCore::FixPoint Field_1_15; // 0x58
	::RPG::GameCore::FixPoint Field_1_13; // 0x60
	::RPG::GameCore::PropertyStacking Field_1_11; // 0x68
	::System::Int32 Field_1_5; // 0x6C
	::System::Int32 Field_1_10; // 0x70
	::System::Int32 Field_1_9; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714__CCTOR_OFFSET))();
	}

	::Class_1_83AB3963F9C15714* Method_1_1DF89B53B029DC2B(::RPG::GameCore::PropertyStacking a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::PropertyAdsorptionConfig* a5)
	{
		return ((::Class_1_83AB3963F9C15714*(*)(::PVOID, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_1DF89B53B029DC2B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B40758801439DAEA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_B40758801439DAEA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_03283D79AA863425(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_03283D79AA863425_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_DISPOSE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_CLEAR_OFFSET))(this);
	}

	::System::Int32 Method_1_AAB64D3DC602450F(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_AAB64D3DC602450F_OFFSET))(this, a1);
	}

	::System::Void Method_1_455046DD3682388F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_455046DD3682388F_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_66F8FE6C5E97D9CE(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_66F8FE6C5E97D9CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7D1F41A355D015B(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_B7D1F41A355D015B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FB738A84DBA302A(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_7FB738A84DBA302A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_75EB2D0341D0BD0F(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_75EB2D0341D0BD0F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_52CF8D99525A9417(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_52CF8D99525A9417_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE4CFEF68A645229(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_EE4CFEF68A645229_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_C72B925A491E9859_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_1_BADDA70ED68283AE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_BADDA70ED68283AE_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_2_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_3()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_8EDB7FE5AA37C50F_3_OFFSET))(this);
	}

	::RPG::GameCore::PropertyAdsorptionConfig* Method_1_F6BA81794F7DAF2B()
	{
		return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_F6BA81794F7DAF2B_OFFSET))(this);
	}

	::RPG::GameCore::PropertyStacking Method_1_7F49939C8676162E()
	{
		return ((::RPG::GameCore::PropertyStacking(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83AB3963F9C15714_METHOD_1_7F49939C8676162E_OFFSET))(this);
	}
};
