#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveUndirectedEdgeSetting; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA925300)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA925340)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__GENERATECURVEEDGES_B__7_0_OFFSET UNITYSDK_OFFSET(0xA925350)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph___c_TypeDefinitionIndex = 63237;

	class MonoCurveUndirectedGraph___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::CurveUndirectedEdgeSetting*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::CurveUndirectedEdgeSetting*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveUndirectedGraph___c_TypeDefinitionIndex)->GetStaticField(0x3CD20);
		}
		static ::RPG::Client::MonoCurveUndirectedGraph___c** StaticGet___9()
		{
			return (::RPG::Client::MonoCurveUndirectedGraph___c**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveUndirectedGraph___c_TypeDefinitionIndex)->GetStaticField(0x3CD28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateCurveEdges_b__7_0(::RPG::Client::CurveUndirectedEdgeSetting* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__GENERATECURVEEDGES_B__7_0_OFFSET))(this, item);
		}
	};
}
