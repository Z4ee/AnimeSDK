#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_137;
class Class_1_F236C4DB0600E05D;
class Class_1_FA404EB3FBF8DFF5;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class MainMissionRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_4C225BD41CBBAAC4_OFFSET UNITYSDK_OFFSET(0xABE40B0)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_8718C52625BF3B53_OFFSET UNITYSDK_OFFSET(0xABE3F10)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_8EDCB2E07DFAD045_OFFSET UNITYSDK_OFFSET(0xABE4480)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_9993C3977E4FC96E_OFFSET UNITYSDK_OFFSET(0xABE4650)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_C568BB536B4EDF0B_OFFSET UNITYSDK_OFFSET(0xABE3C70)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_C935DB3954C14B14_OFFSET UNITYSDK_OFFSET(0xABE3D70)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_DBB0355A6725B06C_OFFSET UNITYSDK_OFFSET(0xABE3FE0)
#define CLASS_1_0BFE1E7F932DA78F_METHOD_1_E7E18EAD15F70E25_OFFSET UNITYSDK_OFFSET(0xABE4400)

inline static constexpr unsigned int Class_1_0BFE1E7F932DA78F_TypeDefinitionIndex = 58024;

class Class_1_0BFE1E7F932DA78F : public ::System::Object
{
public:
	static ::System::Boolean Method_1_C568BB536B4EDF0B(::System::UInt32 a1, ::System::Int32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_C568BB536B4EDF0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_8718C52625BF3B53(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_8718C52625BF3B53_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C935DB3954C14B14(::RPG::GameCore::MainMissionRow* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_C935DB3954C14B14_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_DBB0355A6725B06C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_DBB0355A6725B06C_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_4C225BD41CBBAAC4(::Class_1_F236C4DB0600E05D* a1, ::Class_1_43BD383C98B4C0C5_137* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::Class_1_F236C4DB0600E05D*, ::Class_1_43BD383C98B4C0C5_137*))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_4C225BD41CBBAAC4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E7E18EAD15F70E25(::Class_1_F236C4DB0600E05D* a1, ::RPG::Client::MapDef* a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::Class_1_F236C4DB0600E05D*, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_E7E18EAD15F70E25_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_8EDCB2E07DFAD045(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_FA404EB3FBF8DFF5* a2)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_FA404EB3FBF8DFF5*))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_8EDCB2E07DFAD045_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_9993C3977E4FC96E(::Class_1_F236C4DB0600E05D* a1, ::Class_1_43BD383C98B4C0C5_137* a2, ::Class_1_FA404EB3FBF8DFF5* a3)
	{
		return ((::System::UInt32(*)(::Class_1_F236C4DB0600E05D*, ::Class_1_43BD383C98B4C0C5_137*, ::Class_1_FA404EB3FBF8DFF5*))((::PBYTE)hIl2Cpp + CLASS_1_0BFE1E7F932DA78F_METHOD_1_9993C3977E4FC96E_OFFSET))(a1, a2, a3);
	}
};
